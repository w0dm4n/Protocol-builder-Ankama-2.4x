<?php
require_once("type.php");

function parse_type()
{
    $message_folder = dirname(__FILE__) . "\\types\\";
    $messages = scandir($message_folder);

    $i = 0;
    foreach ($messages as $value)
    {
        if ($value != "." && $value != "..")
        {
            new Type($value, file_get_contents($message_folder . $value));
            $i++;
        }
    }
    echo $i . " types generated !\n";
}

?>