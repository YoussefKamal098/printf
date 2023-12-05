#include "main.h"

/**
 * print_int -  print_int
 * @args: args
 * @params: params
 * Return: return
 */
unsigned int print_int(va_list args, params_t *params)
{
	unsigned int bytes;
	long int num;
	char *str;

	if (params->l_modifier)
		num = va_arg(args, long int);
	else if (params->h_modifier)
		num = (short int)va_arg(args, int);
	else
		num = (int)va_arg(args, int);

	str = convert(num, 10, 1);
	bytes = print_number(str, params);

	free(str);
	return (bytes);
}
