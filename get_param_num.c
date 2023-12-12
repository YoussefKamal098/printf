#include "main.h"

/**
 * get_param_num - get_param_num
 * @format: format
 * @i: i
 * @args:args
 * Return: number field
 */

int get_param_num(char *format, int *i, va_list args)
{
	unsigned int num = 0;

	if (format[*i] == '*')
	{
		num = va_arg(args, unsigned int);
		*i = *i + 1;
	}
	else
	{
		while (_isdigit(format[*i]))
		{
			num = num * 10 + (format[*i] - '0');
			*i = *i + 1;
		}
	}

	return (num);
}
