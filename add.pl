#!/usr/bin/perl

use strict;

my ($a, $b);

my ($a_str, $b_str) = split(/ +/, <STDIN>);

$a = int($a_str);
$b = int($b_str);

printf "%d\n", $a + $b;
