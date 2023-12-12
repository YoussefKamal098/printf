#include "main.h"

/**
 * print_unsigned_int - print_unsigned_int
 * @args: args
 * @params: params
 * Return: return
 */
int print_unsigned_int(va_list args, params_t *params)
{
	unsigned long int num;
	unsigned int bytes;
	char *str;

	num = handle_unsigned_num_modifier(args, params);
	str = convert(num, 10, 1, 1);

	if (str == NULL)
		return (0);

	params->unsign = 1;
	bytes = print_num(str, params);

	free(str);
	return (bytes);
}
