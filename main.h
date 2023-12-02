#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

#define BUFFER_SIZE 1024
#define BUFFER_FLUSH -1
#define NULL_STRING "(null)"
#define NULL_POINTER "(nil)"

/**
 * struct specifier - struct specifier
 * @type: type
 * @fn: fn
 */

typedef struct specifier
{
	char type;
	int (*fn)(va_list);
} specifier_t;

/* char_pack.c  */
int _putchar(char c);

/*str_pack.c*/
int _puts(char *str);
int _strlen(char *str);
int _print_rev_string(char *str);
int number_len(long int num, unsigned int base);

/* print_functions_1.c */
int print_int(va_list args);
int print_unsigned_int(va_list args);
int print_oct(va_list args);
int print_bin(va_list args);

/* print_functions_2.c */
int print_hex(va_list args);
int print_HEX(va_list args);
int print_address(va_list args);
int _print_HEX(unsigned long int num);

/* print_functions_3.c */
int print_string(va_list args);
int print_rev_string(va_list args);
int print_rot13(va_list args);
int print_printable_letters(va_list args);

/* print_functions_4.c */
int print_char(va_list args);
int print_percent_sign(va_list args);

/* converter.c */
char *convert(long int num, unsigned int base, unsigned int lower);

/* get_specifier.c */
int (*get_print_fn(char specifier))(va_list args);

/* _printf.c */
int _printf(const char *format, ...);

#endif /* MAIN_H */
