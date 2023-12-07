#include "main.h"

/**
 * print_oct - print_oct
 * @args: args
 * @params: params
 * Return: return
 */
unsigned int print_oct(va_list args, params_t *params)
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

	str = convert(num, 8, 1, 1);

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
