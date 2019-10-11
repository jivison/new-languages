#!/usr/bin/perl -w
use strict;
use warnings;

# Perl variables come in three types: scalars, arrays and hashes. Each type has its own sigil: $, @ and % respectively. Variables are declared using my, and remain in scope until the end of the enclosing block or file.


my $name = "John";
print "Hi ".$name."!";

my @array = (
    "print",
    "these",
    "things",
    "out",
    "for",
    "me", # Trailing commas are ok
);

print $array[0];
print $array[1];
print $array[-1];

# Variables can be interpolated into string
# (With no extra syntax!!)
print "My name is $name";