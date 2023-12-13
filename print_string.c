#include "main.h"

/**
 * print_string - print_string
 * @args: args
 * @params: params
 * Return: number of written bytes
 */

int print_string(va_list args, params_t *params)
{
	unsigned int len, old_len, bytes = 0;
	int new_line;
	char pad_char = ' ';
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = NULL_STRING;

	old_len = len = _strlen(str);

	new_line = str[len - 1] == '\n';

	if (params->precision < len)
		len = params->precision;

	if (params->minus_flag)
		bytes += handle_string_precision(str, params);

	while (len++ < params->width)
		bytes += _putchar(pad_char);

	if (!params->minus_flag)
		bytes += handle_string_precision(str, params);

	if (new_line && params->precision < old_len)
		bytes += _putchar('\n');

	return (bytes);
}

/**
 * handle_string_precision - handle_string_precision
 * @str: str
 * @params: params
 * Return: number of written bytes
 */

int handle_string_precision(char *str, params_t *params)
{
	unsigned int len = _strlen(str);
	unsigned int precision = params->precision;

	len = precision != UINT_MAX && precision < len ? precision : len;

	return (print_from_to(str, 0, len - 1, '\0'));
}
