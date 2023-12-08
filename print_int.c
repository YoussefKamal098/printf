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

	num = handle_num_modifier(args, params);
	str = convert(num, 10, 0, 1);

	if (str == NULL)
		return (0);

	bytes = print_number(str, params);

	free(str);
	return (bytes);
}
