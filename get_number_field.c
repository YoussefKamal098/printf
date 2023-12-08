#include "main.h"

/**
 * get_number_field - get_number_field
 * @format: format
 * @i: i
 * @args:args
 * Return: return
 */

unsigned int get_number_field(char *format, int *i, va_list args)
{
	unsigned int num = 0;
	int j = *i;

	if (format[j] == '*')
	{
		num = va_arg(args, unsigned int);
		j++;
	}
	else
	{
		while (_isdigit(format[j]))
			num = num * 10 + (format[j++] - '0');
	}

	*i = j;
	return (num);
}
