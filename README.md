# printf
ALX PRINTF PROJECT

## Description:page_facing_up:

------------

![Printf Image](Images/printf.jpeg)

The printf function sends formatted output to stdout.
A custom _printf() for learning purposes was developed by cohort  #8 students Nicks and Musa parsanka.
_printf() function format string is a character string, beginning and ending in its initial shift state, if any. 
These arguments are placed using the percentage '%' operator

------------


### Resources

------------



Secrets of printfby Don colton
[Download PDF](pdfs/secrets_of_printf.pdf)

------------



#### Authorized functions and macros

------------


write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

------------

#### Compilation:alembic:

------------



The code must be compiled this way:

**$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c**

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (main.h): **#include main.h**

------------

#### Use & Examples


------------

**Prototype:** int _printf(const char *format, ...);
**Use - General:** _printf("format string", var1, var2, ...);

**Examples:**
 - Basic String: _printf("%s Alx", "Hello");`
	 - Output: Hello Alx

- Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`
	- Output: This is an array element arr[32]:A

Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. The following list are the specifiers and flags allowed.

------------
### Authors &copy;

- Youssef Samuel Kamal
  

