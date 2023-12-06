#include "main.h"

/**
 * print_unsigned_int - print_unsigned_int
 * @args: args
 * @params: params
 * Return: return
 */
unsigned int print_unsigned_int(va_list args, params_t *params)
{
	unsigned long int num;
	unsigned int bytes;
	char *str;

	if (params->l_modifier)
		num = va_arg(args, unsigned long int);
	else if (params->h_modifier)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = (unsigned int)va_arg(args, unsigned int);

	str = convert(num, 10, 1, 1);

	params->unsign = 1;
	bytes = print_number(str, params);

	free(str);
	return (bytes);
}
