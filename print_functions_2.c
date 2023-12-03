#include "main.h"
/**
 * print_hex - print_hex
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_hex(va_list args, parameters_t *parameters)
{
	unsigned long int num;
	unsigned int bytes = 0;
	char *str;

	if (parameters->l_modifier)
		num = va_arg(args, unsigned long int);
	if (parameters->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	if (parameters->hashtag_flag)
		bytes += _puts("0x");

	str = convert(num, 16, 1);
	bytes += _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_HEX - print_HEX
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_HEX(va_list args, parameters_t *parameters)
{
	unsigned long int num;
	unsigned int bytes = 0;
	char *str;

	if (parameters->l_modifier)
		num = va_arg(args, unsigned long int);
	if (parameters->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	if (parameters->hashtag_flag)
		bytes += _puts("0X");

	str = convert(num, 16, 0);
	bytes += _puts(str);

	free(str);
	return (bytes);
}

/**
 * _print_HEX - _print_HEX
 * @num: num
 * Return: return
 */
int _print_HEX(unsigned long int num)
{
	int bytes;
	char *str;

	str = convert(num, 16, 0);
	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_address - print_address
 * @args: args
 * @parameters: parameters
 * Return: return
 */

int print_address(va_list args, parameters_t *parameters)
{
	unsigned long int num;
	int bytes = 0;
	char *str;

	(void)parameters;

	num = va_arg(args, unsigned long int);

	if (!num)
		return (_puts(NULL_POINTER));

	str = convert(num, 16, 1);

	bytes = _puts("0x") + _puts(str);

	free(str);
	return (bytes);
}
