#include "main.h"

/**
 *  print_number -  print_number
 * @str: args
 * @parameters: parameters
 * Return: return
 */
int print_number(char *str, parameters_t *parameters)
{
	int bytes = 0;
	int is_negative = (!parameters->unsign && *str == '-');

	if (parameters->space_flag && !parameters->unsign &&
	    !parameters->plus_flag && !is_negative)
		bytes += _putchar(' ');

	if (parameters->plus_flag && !is_negative && !parameters->unsign)
		bytes += _putchar('+');

	bytes += _puts(str);

	return (bytes);
}

/**
 * print_unsigned_int - print_unsigned_int
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_unsigned_int(va_list args, parameters_t *parameters)
{
	unsigned long int num;
	unsigned int bytes;
	char *str;

	if (parameters->l_modifier)
		num = va_arg(args, unsigned long int);
	else if (parameters->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	str = convert(num, 10, 1);

	parameters->unsign = 1;
	bytes = print_number(str, parameters);

	free(str);
	return (bytes);
}

/**
 * print_int -  print_int
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_int(va_list args, parameters_t *parameters)
{
	long int num;
	unsigned int bytes;
	char *str;

	if (parameters->l_modifier)
		num = va_arg(args, long int);
	else if (parameters->h_modifier)
		num = (short int)va_arg(args, int);
	else
		num = (int)va_arg(args, int);

	str = convert(num, 10, 1);
	bytes = print_number(str, parameters);

	free(str);
	return (bytes);
}

/**
 * print_bin - print_bin
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_bin(va_list args, parameters_t *parameters)
{
	unsigned int num, bytes = 0;
	char *str, *temp;

	num = va_arg(args, unsigned int);

	str = convert(num, 2, 1);

	if (parameters->hashtag_flag)
	{
		temp = str;
		str = str_concat("0b", str);
		free(temp);
	}

	parameters->unsign = 1;
	bytes += print_number(str, parameters);

	free(str);
	return (bytes);
}

/**
 * print_oct - print_oct
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_oct(va_list args, parameters_t *parameters)
{
	unsigned long int num;
	unsigned int bytes = 0;
	char *str, *temp;

	if (parameters->l_modifier)
		num = va_arg(args, unsigned long int);
	else if (parameters->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	str = convert(num, 8, 1);

	if (parameters->hashtag_flag)
	{
		temp = str;
		str = str_concat("0o", str);
		free(temp);
	}

	parameters->unsign = 1;
	bytes += print_number(str, parameters);

	free(str);
	return (bytes);
}
