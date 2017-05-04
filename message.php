<?php
class Message
{
    public $packet_name;
    public $packet_id;
    public $vars;
    public $as;

    public $header_name;
    public $src_name;
    public $custom_incs;

    static $output_folder = "\\output\\messages\\";
    
    function __construct($name, $content)
    {
        $this->as = $content;
        $split = explode(".", $name);
        $this->packet_name = $split[0];

        $split = explode("public static const protocolId:uint =", $content);
        $split = explode(";", $split[1]);
        $this->packet_id = intval($split[0]);

        if (!empty($this->packet_name) && $this->packet_id > 0)
        {
            $this->vars = array();
            $this->custom_incs = array();
            $this->parse_variables();

          $this->setNames();
          $this->writeTemplateHeader();
          $this->writeTemplateSrc();
        }
    }

    function setNames()
    {
        $this->header_name = $this->packet_name . ".hpp";
        $this->src_name = $this->packet_name . ".cpp";
    }

    function getHeaderTemplate()
    {
        $content = file_get_contents(dirname(__FILE__) . "\\template_message_header.th");
        return $content;
    }

    function getSrcTemplate()
    {
        $content = file_get_contents(dirname(__FILE__) . "\\template_message.th");
        return $content;
    }

    function getVarsMethod()
    {
        $varsMethod = "";
        $numItems = count($this->vars);
        $i = 0;
         foreach ($this->vars as $var)
        {
            if(++$i === $numItems)
                $varsMethod = $varsMethod . $var[1] . " " . $var[0];
            else
                $varsMethod = $varsMethod . $var[1] . " " . $var[0] . ", ";
        }
        return ($varsMethod);
    }

    function getVarsDeclaration()
    {
        $varsDeclaration = "";
        $numItems = count($this->vars);
        $i = 0;
        foreach ($this->vars as $var)
        {
            $var[1] = str_replace("&", "", $var[1]);
            if(++$i === $numItems)
                $varsDeclaration = $varsDeclaration . "\t" . $var[1] . " " . $var[0] . ";";
            else
                $varsDeclaration = $varsDeclaration . "\t" . $var[1] . " " . $var[0] . ";\n";
        }
        return ($varsDeclaration);
    }

    function getVarsSetter()
    {
        $varsSetter = "";

        foreach ($this->vars as $var)
            $varsSetter = $varsSetter . "this->" . $var[0] . " = " . $var[0] . ";\n";
        return ($varsSetter);
    }

    function getCustomIncs()
    {
        $customsIncs = "";
        foreach ($this->custom_incs as $inc)
            $customsIncs = $customsIncs . "#include \"" . $inc . "\" \n";
        return $customsIncs;
    }

    function getSerialize()
    {
        $method = "function serializeAs_" . $this->packet_name;
        $data = "";
        $lines = explode("\n", $this->as);
        $accolade = 0;
        $accolade_end = 0;
        $in_method = false;
        $skip = false;
        foreach ($lines as $line)
        {
            if (strstr($line, $method))
            {
                $in_method = true;
                continue;
            }

            if ($in_method)
            {
                if (strstr($line, "if("))
                {
                    $skip = true;
                    continue;
                }
                if ($skip)
                {
                    if (strstr($line, "}"))
                        $skip = false;
                    continue;
                }
                if (strstr($line, "{"))
                {
                    $accolade++;
                    if (strlen($line) == 8) // une simple accollade
                        continue;
                }
                $line = str_replace("param1", "writer", $line);
                $line = str_replace("this.", "this->", $line);
                $line = str_replace(".length", ".size()", $line);
                $line = str_replace("BooleanByteWrapper.", "BooleanByteWrapper::", $line);
                $line = str_replace("push", "push_back", $line);
                $line = str_replace("writeBoolean", "writeBool", $line);
                if (strstr($line, "var"))
                {
                    $var_name = explode("var ", $line);
                    $var_name = explode(":", $var_name[1]);
                    $line = "\tint " . $var_name[0] . " = 0;\n";
                }

                if (strstr($line, "serializeAs"))
                {
                    $var = explode(".", $line);
                    $line = $var[0]. ".serialize(writer);\n";
                }
                if (strstr($line, "}"))
                {
                    $accolade_end++;
                    if (strlen($line) == 8) // une simple accollade
                        continue;
                }
                $data = $data . $line;

                if ($accolade_end >= $accolade)
                    break;
            }
        }
        return $data;
    }

    function getdeSerialize()
    {
        $method = "function deserializeAs_" . $this->packet_name;
        $data = "";
        $lines = explode("\n", $this->as);
        $accolade = 0;
        $accolade_end = 0;
        $in_method = false;
        $skip = false;
        foreach ($lines as $line)
        {
            if (strstr($line, $method))
            {
                $in_method = true;
                continue;
            }

            if ($in_method)
            {
                if (strstr($line, "if("))
                {
                    $skip = true;
                    continue;
                }
                if ($skip)
                {
                    if (strstr($line, "}"))
                        $skip = false;
                    continue;
                }
                if (strstr($line, "{"))
                {
                    $accolade++;
                }
                $line = str_replace("param1", "reader", $line);
                $line = str_replace("this.", "this->", $line);
                $line = str_replace(".length", ".size()", $line);
                $line = str_replace("BooleanByteWrapper.", "BooleanByteWrapper::", $line);
                $line = str_replace("push", "push_back", $line);
                $line = str_replace("readBoolean", "readBool", $line);
                if (strstr($line, "var"))
                {
                    if (strstr($line, "reader"))
                    {
                        $reader = explode("reader", $line);
                        $var_name = explode("var ", $line);
                        $var_name = explode(":", $var_name[1]);
                        $line = "\tint " . $var_name[0] . " = reader" . $reader[1];
                    }
                    else
                    {
                        $var_name = explode("var ", $line);
                        $var_name = explode(":", $var_name[1]);
                        $line = "\tint " . $var_name[0] . " = 0;\n";
                    } 
                }

                if (strstr($line, "deserializeAs"))
                {
                    $var = explode(".", $line);
                    $line = $var[0]. ".serialize(writer);\n";
                }
                if (strstr($line, "}"))
                {
                    $accolade_end++;
                }
                if (strstr($line, "new"))
                    continue;

                $data = $data . $line;
                if ($accolade_end >= $accolade)
                    break;
            }
        }
        //echo $accolade . "\n";
        return $data;
    }

    function writeTemplateSrc()
    {
        $writeName = dirname(__FILE__) . Message::$output_folder . $this->src_name;
        $src = $this->getSrcTemplate();
        $vars_method = $this->getVarsMethod();
        $vars_setter = $this->getVarsSetter();
        $serialize_data = $this->getSerialize();
        $deserialize_data = $this->getdeSerialize();
        $src = str_replace("%name%", $this->packet_name, $src);
        $src = str_replace("%vars_method%", $vars_method, $src);
        $src = str_replace("%vars_method_setter%", $vars_setter, $src);
        $src = str_replace("%write_data%", $serialize_data, $src);
         $src = str_replace("%read_data%", $deserialize_data, $src);
        /*$lines = explode("\n", $src);
        foreach ($lines as $line)
        {
            echo $line . "\n";
        }*/
        
        file_put_contents($writeName, $src);
    }

    function writeTemplateHeader()
    {
        $writeName = dirname(__FILE__) . Message::$output_folder . $this->header_name;
        $header = $this->getHeaderTemplate();
        $header = str_replace("%name_upper%", strtoupper($this->packet_name . "_THANADOLOS"), $header);
        $header = str_replace("%name%", $this->packet_name, $header);
        $header = str_replace("%id%", $this->packet_id, $header);
        $vars_method = $this->getVarsMethod();
        $vars_declaration = $this->getVarsDeclaration(); 
        
        $header = str_replace("%vars_method%", $vars_method, $header);
        $header = str_replace("%vars_declarations%", $vars_declaration, $header);
        if (sizeof($this->custom_incs) > 0)
        {
            $custom_incs = $this->getCustomIncs(); 
            $header = str_replace("%customs_includes%", $custom_incs, $header);
        }
        else
            $header = str_replace("%customs_includes%", "", $header);

        file_put_contents($writeName, $header);
    }

    function getVarType($type)
    {
        if (strstr($type, "Vector"))
        {
            $res = "std::vector<";
            $vec_type = explode("Vector.<", $type);
            $vec_type = explode(">", $vec_type[1]);
            $res = $res . $vec_type[0] . ">";

            if ($vec_type[0] == "int" || $vec_type[0] == "char")
                return "ByteArray";
            return $res;
        }
        else if (strstr($type, "String"))
            return "std::string";
        else if (strstr($type, "int") || strstr($type, "Number"))
            return "int";
        else if (strstr($type, "Boolean"))
            return "bool";
        else if (strstr($type, "uint"))
            return "uint";
        $type = str_replace(";", "", $type);
        $type = str_replace("\r", "", $type);
        $type = str_replace("\n", "", $type);
        array_push($this->custom_incs, $type . ".hpp");
        return $type . "&";
    }

    function parse_variables()
    {
        $lines = explode("\n", $this->as);
        foreach ($lines as $line)
        {
            if (strstr($line, "var") && strstr($line, "public"))
            {
                $parse_var = explode("var ", $line);
                $parse_var = explode(":", $parse_var[1]);
                $var_name = $parse_var[0];
                $var_type = $this->getVarType($parse_var[1]);
                
                $var = array($var_name, $var_type);

                array_push($this->vars, $var);
                //echo "name : " . $var_name . ", type: " . $var_type . "\n";
            }
        }
    }
}
?>