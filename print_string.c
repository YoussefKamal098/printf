#include "main.h"

/**
 * print_string - print_string
 * @args: args
 * @params: params
 * Return: return
 */

unsigned int print_string(va_list args, params_t *params)
{
	unsigned int len, bytes = 0;
	char pad_char = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = NULL_STRING;

	len = _strlen(str);

	if (params->minus_flag)
		bytes += _puts(str);

	while (len++ < params->width)
		bytes += _putchar(pad_char);

	if (!params->minus_flag)
		bytes += _puts(str);

	return (_puts(str));
}
