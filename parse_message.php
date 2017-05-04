<?php
require_once("message.php");

function parse_message()
{
    $message_folder = dirname(__FILE__) . "\\messages\\";
    $messages = scandir($message_folder);

    $i = 0;
    foreach ($messages as $value)
    {
        if ($value != "." && $value != "..")
        {
            new Message($value, file_get_contents($message_folder . $value));
            $i++;
        }
    }
    echo $i . " packets generated !\n";
}

?>