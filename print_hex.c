#include "main.h"
/**
 * print_hex - print_hex
 * @args: args
 * @params: params
 * Return: return
 */
unsigned int print_hex(va_list args, params_t *params)
{
	unsigned long int num;
	unsigned int bytes = 0;
	char *str, *temp;

	if (params->l_modifier)
		num = va_arg(args, unsigned long int);
	else if (params->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	str = convert(num, 16, 1);

	if (params->hashtag_flag)
	{
		temp = str;
		str = str_concat("0x", str);
		free(temp);
	}

	params->unsign = 1;
	bytes += print_number(str, params);

	free(str);
	return (bytes);
}

/**
 * print_HEX - print_HEX
 * @args: args
 * @params: params
 * Return: return
 */
unsigned int print_HEX(va_list args, params_t *params)
{
	unsigned long int num;
	unsigned int bytes = 0;
	char *str, *temp;

	if (params->l_modifier)
		num = va_arg(args, unsigned long int);
	else if (params->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	str = convert(num, 16, 1);

	if (params->hashtag_flag)
	{
		temp = str;
		str = str_concat("0X", str);
		free(temp);
	}

	params->unsign = 1;
	bytes += print_number(str, params);

	free(str);
	return (bytes);
}

/**
 * _print_HEX - _print_HEX
 * @num: num
 * Return: return
 */
unsigned int _print_HEX(unsigned long int num)
{
	unsigned int bytes;
	char *str;

	str = convert(num, 16, 0);
	bytes = _puts(str);

	free(str);
	return (bytes);
}