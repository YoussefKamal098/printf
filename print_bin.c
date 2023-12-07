#include "main.h"

/**
 * print_bin - print_bin
 * @args: args
 * @params: params
 * Return: return
 */
unsigned int print_bin(va_list args, params_t *params)
{
	unsigned int num, bytes = 0;
	char *str, *temp;

	num = va_arg(args, unsigned int);
	str = convert(num, 2, 1, 1);

	if (params->hashtag_flag && num)
	{
		temp = str;
		str = str_concat("0", str);
		free(temp);
	}

	params->unsign = 1;
	bytes += print_number(str, params);

	free(str);
	return (bytes);
}
