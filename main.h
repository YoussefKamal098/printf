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

#define PARAMS_INIT                                          \
	{                                            \
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0 \
	}

/**
 * struct params - struct params
 * @unsign: unsign
 * @plus_flag: plus_flag
 * @space_flag: space_flag
 * @hashtag_flag: hashtag_flag
 * @zero_flag: zero_flag
 * @minus_flag: minus_flag
 * @width: width
 * @precision: precision
 * @h_modifier: h_modifier
 * @l_modifier: l_modifier
 */

typedef struct params
{
	unsigned int unsign;
	unsigned int space_flag;
	unsigned int plus_flag;
	unsigned int hashtag_flag;
	unsigned int zero_flag;
	unsigned int minus_flag;
	unsigned int width;
	unsigned int precision;
	unsigned int h_modifier;
	unsigned int l_modifier;
} params_t;

/**
 * struct specifier - struct specifier
 * @type: type
 * @fn: fn
 */

typedef struct specifier
{
	char type;
	int (*fn)(va_list, params_t *);
} specifier_t;

/* char_pack.c  */
int _putchar(char c);
int _isdigit(char c);

/*str_pack_1.c*/
unsigned int _puts(char *str);
unsigned int _strlen(char *str);
unsigned int _print_rev_string(char *str);
unsigned int count_digit(unsigned long int num, unsigned int base);
unsigned int print_from_to(char *str, int start, int end, char except);

/*str_pack_2.c*/
char *str_concat(char *str1, char *str2);

/* get_converter.c*/
char *convert(long int num, unsigned int base, int is_unsign, int is_lower);

/* print_bin.c */
int print_bin(va_list args, params_t *params);

/* print_oct.c */
int print_oct(va_list args, params_t *params);

/* print_hex.c */
int print_hex(va_list args, params_t *params);
int print_HEX(va_list args, params_t *params);
int _print_HEX(unsigned long int num);

/* print_address.c */
int print_address(va_list args, params_t *params);

/* print_int.c */
int print_int(va_list args, params_t *params);

/* print_unsigned_int.c */
int print_unsigned_int(va_list args, params_t *params);

/* print_string.c */
int print_string(va_list args, params_t *params);
int handle_string_precision(char *str, params_t *params);

/* print_rev_string.c */
int print_rev_string(va_list args, params_t *params);

/* print_rot13.c */
int print_rot13(va_list args, params_t *params);

/* print_printable_letters.c */
int print_printable_letters(va_list args, params_t *params);

/* print_percent.c */
int print_percent_sign(va_list args, params_t *params);

/* print_char.c */
int print_char(va_list args, params_t *params);

/* print_number.c */
int print_number(char *str, params_t *params);
char *handle_number_precision(char *str, params_t *params);
int is_print_number_sign(params_t *params, int is_neg);
int is_print_space(params_t *params, int is_neg);
int is_print_pluse_sign(params_t *params, int is_neg);

/* print_number_right_shift.c */
int print_number_right_shift(char *str, params_t *params);

/* print_number_left_shift.c */
int print_number_left_shift(char *str, params_t *params);

/* init_parameters.c */
void init_params(params_t *params);

/* get_parameters.c */
int get_flag(char c, params_t *params);
int get_number_modifier(char c, params_t *params);
void get_width(char *format, int *i, va_list args, params_t *params);
void get_precision(char *format, int *i, va_list args, params_t *params);
void get_specifier_param(char *format, int *i, va_list args, params_t *params);

/* get_number_field.c */
int get_number_field(char *format, int *i, va_list args);

/* handle_number_modifier.c */
long int handle_num_modifier(va_list args, params_t *params);
unsigned long int handle_unsigned_num_modifier(va_list args, params_t *params);

/* get_specifier.c */
int (*get_specifier_printer(char specifier))(va_list args, params_t *params);

/* _printf.c */
int _printf(const char *format, ...);

#endif /* MAIN_H */
