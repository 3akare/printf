# _printf
A formatted output conversion C program. It is a puesdo-recreation of the C standard libray function `printf`

## Synopsis
`int _printf(const char *format, ...);`

## Dependencies
All files will be complied on Ubuntu 20.04LTS using gcc, using the options `gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c`

## Usage
After complilation, `_printf()` is ready for use.
### Example `main.c`:
```
    include "printf.h"

    int main(void)
    {
         _printf("This is an implementation of %s\n", "printf");
    }
```
Complilation:
```
    gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c -o tester
```
Output:
```  
    $ ./tester
    This is an implementation of printf
    $    
```
## Description
The `_prinft()` function produces output in accordance to a specified format. This function prints its output to the stdout and returns the lenght of the output when successful.

## Convertion Specifiers
- %c: Character specifier
- %d: Decimal specifier
- %i: Integer specifier
- %s: String specifier (character pointer)
- %%: Print the percentage sign

# Author
- David Bakare 
# Acknowledgments
This project was written as part of the curriculum for Holberton/ALX-SE program

