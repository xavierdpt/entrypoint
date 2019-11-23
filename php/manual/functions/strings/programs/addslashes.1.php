<?php

    $str="Simple quotes ('), double quotes (\"), backslashes (\\) and nul characters are escaped.";
    echo "Original string: " . $str . "\n";
    echo "Modified string: " . addslashes($str) . "\n";
?>
