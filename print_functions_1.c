#include "main.h"
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
	bytes = _puts(str);

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

	num = va_arg(args, int);
	str = convert(num, 10, 1);

	bytes = _puts(str);

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
	char *str;

	num = va_arg(args, unsigned int);

	if (parameters->hashtag_flag)
		bytes += _putchar('0');

	str = convert(num, 2, 1);
	bytes += _puts(str);

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
	char *str;

	if (parameters->l_modifier)
		num = va_arg(args, unsigned long int);
	else if (parameters->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	if (parameters->hashtag_flag)
		bytes += _putchar('0');

	str = convert(num, 8, 1);
	bytes += _puts(str);

	free(str);
	return (bytes);
}
