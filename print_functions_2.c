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
	char *str, *temp;

	if (parameters->l_modifier)
		num = va_arg(args, unsigned long int);
	else if (parameters->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	str = convert(num, 16, 1);

	if (parameters->hashtag_flag)
	{
		temp = str;
		str = str_concat("0x", str);
		free(temp);
	}

	parameters->unsign = 1;
	bytes += print_number(str, parameters);

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
	char *str, *temp;

	if (parameters->l_modifier)
		num = va_arg(args, unsigned long int);
	else if (parameters->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	str = convert(num, 16, 1);

	if (parameters->hashtag_flag)
	{
		temp = str;
		str = str_concat("0X", str);
		free(temp);
	}

	parameters->unsign = 1;
	bytes += print_number(str, parameters);

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
	char *str, *temp;

	(void)parameters;

	num = va_arg(args, unsigned long int);

	if (!num)
		return (_puts(NULL_POINTER));

	str = convert(num, 16, 1);

	temp = str;
	str = str_concat("0x", str);
	free(temp);

	bytes += print_number(str, parameters);

	free(str);
	return (bytes);
}
