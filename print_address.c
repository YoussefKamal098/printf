#include "main.h"

/**
 * print_address - print_address
 * @args: args
 * @params: params
 * Return: return
 */

unsigned int print_address(va_list args, params_t *params)
{
	unsigned long int num;
	unsigned int bytes = 0;
	char *str, *temp;

	num = va_arg(args, unsigned long int);

	if (!num)
		return (_puts(NULL_POINTER));

	str = convert(num, 16, 1, 1);

	temp = str;
	str = str_concat("0x", str);
	free(temp);

	params->unsign = 1;
	bytes += print_number(str, params);

	free(str);
	return (bytes);
}
