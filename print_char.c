#include "main.h"

/**
 * print_char - print_char
 * @args: args
 * @params: params
 * Return: return
 */

unsigned int print_char(va_list args, params_t *params)
{
	unsigned int bytes = 0, len = 1;
	char c = va_arg(args, int), pad_char = ' ';

	if (params->minus_flag)
		bytes += _putchar(c);

	while (len++ < params->width)
		bytes += _putchar(pad_char);

	if (!params->minus_flag)
		bytes += _putchar(c);

	return (bytes);
}
