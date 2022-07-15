# _printf

## Synopsis
A simple implementation of the printf function that formats and prints out data

## Description
The _prinft() function produces output in accordance to a specified format. This function prints its output to the stdout and return the lenght of the output when successful and -1 when not successful._

## General
+ All files will be complied on Ubuntu 20.04LTS using gcc, using the options `gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c`
+ Prototypes of all functionc are included in the header file called `main.h`
+ Header file is guarded.

The available convertion specifiers are:
+ %c: Prints a single character.
+ %d: Prints integers.
+ %i: Prints integers.
+ %s: Prints a string
+ %%: Prints the percentage sign
