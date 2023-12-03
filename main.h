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

#define PARAMETERS_INIT                                   \
	{                                         \
		0, 0, 0, 0, 0, 0, 0, 0, 0 \
	}

/**
 * struct parameters - struct parameters
 * @unsign: unsign
 * @plus_flag: plus_flag
 * @space_flag: space_flag
 * @hashtag_flag: hashtag_flag
 * @zero_flag: zero_flag
 * @minus_flag: minus_flag
 * @width: width
 * @h_modifier: h_modifier
 * @l_modifier: l_modifier
 */

typedef struct parameters
{
	unsigned int unsign;
	unsigned int space_flag;
	unsigned int plus_flag;
	unsigned int hashtag_flag;
	unsigned int zero_flag;
	unsigned int minus_flag;
	unsigned int width;
	unsigned int h_modifier;
	unsigned int l_modifier;
} parameters_t;

/**
 * struct specifier - struct specifier
 * @type: type
 * @fn: fn
 */

typedef struct specifier
{
	char type;
	int (*fn)(va_list, parameters_t *);
} specifier_t;

/* char_pack.c  */
int _putchar(char c);
int _isdigit(char c);

/*str_pack.c*/
int _puts(char *str);
int _strlen(char *str);
int _print_rev_string(char *str);
int count_digit(long int num, unsigned int base);
int print_from_to(char *start, char *stop, char *except);

/* print_functions_1.c */
int print_int(va_list args, parameters_t *parameters);
int print_unsigned_int(va_list args, parameters_t *parameters);
int print_bin(va_list args, parameters_t *parameters);
int print_oct(va_list args, parameters_t *parameters);

/* print_functions_2.c */
int print_hex(va_list args, parameters_t *parameters);
int print_HEX(va_list args, parameters_t *parameters);
int print_address(va_list args, parameters_t *parameters);
int _print_HEX(unsigned long int num);

/* print_functions_3.c */
int print_string(va_list args, parameters_t *parameters);
int print_rev_string(va_list args, parameters_t *parameters);
int print_rot13(va_list args, parameters_t *parameters);
int print_printable_letters(va_list args, parameters_t *parameters);

/* print_functions_4.c */
int print_char(va_list args, parameters_t *parameters);
int print_percent_sign(va_list args, parameters_t *parameters);

/* converter.c */
char *convert(long int num, unsigned int base, unsigned int lower);

/*get_parameters.c*/
int get_flag(char c, parameters_t *parameters);
int get_modifier(char c, parameters_t *parameters);

/* init_parameters.c */
void init_parameters(parameters_t *parameters);

/* get_specifier.c */
int (*get_print_fn(char specifier))(va_list args, parameters_t *parameters);

/* _printf.c */
int _printf(const char *format, ...);

#endif /* MAIN_H */
