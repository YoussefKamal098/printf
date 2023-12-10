#include "main.h"

/**
 * get_number_field - get_number_field
 * @format: format
 * @i: i
 * @args:args
 * Return: return
 */

int get_number_field(char *format, int *i, va_list args)
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
