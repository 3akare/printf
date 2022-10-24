# _printf
A formatted output conversion C program. It is a pseudo-recreation of the C standard library function `printf`

## Synopsis
`int _printf(const char *format, ...);`

## Dependencies
All files will be complied on Ubuntu 20.04LTS using gcc, using the options `gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c`

## Usage
After complilation, `_printf()` is ready for use.
### Example `main.c`:
```c
    include "printf.h"

    int main(void)
    {
         _printf("This is an implementation of %s\n", "printf");
    }
```
Complilation:
```shell
    gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c -o tester
```
Output:
```shell
    $ ./tester
    This is an implementation of printf
    $
```
## Description
The `_printf()` function produces output in accordance to a specified format. This function prints its output to the stdout and returns the lenght of the output when successful.

## Conversion Specifiers
- %c: Character specifier
- %d: Decimal specifier
- %i: Integer specifier
- %s: String specifier (character pointer)
- %%: Print the percentage sign
- %o: Octal specifier
- %x: Hexadecimal specifier
- %X: Hexadecimal specifier (Uppercase)
- %p: Address specifier

## Custom Specifiers
- %b: Binary specifier
- %R: rot13'ed specifier
- %r: reversed specifier
- %S: String specifier.
 (Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters))

# Author
- [David Bakare](https://github.com/3akare)
# Acknowledgments
This project was written as part of the curriculum for Holberton/ALX-SE program

