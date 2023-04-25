#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define OUT_BUF_SIZE 1024
#define BUF_FLUSH -1

/**
 * struct format - match and convert the specifiers for printf
 *
 * @c: specifier
 * @f: function to be executed
 */
typedef struct format
{
	char c;
	int (*f)();
} convert_specifier;

int _putchar(char c);
int _puts(char *str);
int print_char(va_list x);
int print_string(va_list x);
int print_percent_sign(void);
int print_bin(va_list n);
int print_rev_s(va_list arg);
int print_Srot13(va_list str);
char *convert(unsigned int num, unsigned int base);
char *signed_converter(int num, int base);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int _isalpha(int c);
char _to_upper(char c);
char _to_lower(char c);
int print_ui(va_list arg);
int print_2digits_HEX(int arg);
int print_printable_letters(va_list arg);
int _strlen(char *s);
int print_int(va_list n);
/*int print_address(va_list arg);*/
int _printf(const char *format, ...);

int get_print_fun(char c, va_list args);

#endif /* MAIN_H */
