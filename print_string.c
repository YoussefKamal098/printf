#include "main.h"

/**
 * print_string - print_string
 * @args: args
 * @params: params
 * Return: return
 */

unsigned int print_string(va_list args, params_t *params)
{
	unsigned int len, bytes = 0, i, str_chars_num;
	char pad_char = ' ';
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = NULL_STRING;

	str_chars_num = len = _strlen(str);

	if (params->precision < len)
		str_chars_num = len = params->precision;

	if (params->minus_flag)
	{

		if (params->precision != UINT_MAX)
			for (i = 0; i < str_chars_num; i++)
				bytes += _putchar(*str++);
		else
			bytes += _puts(str);
	}

	while (len++ < params->width)
		bytes += _putchar(pad_char);

	if (!params->minus_flag)
	{
		if (params->precision != UINT_MAX)
			for (i = 0; i < str_chars_num; i++)
				bytes += _putchar(*str++);
		else
			bytes += _puts(str);
	}

	return (bytes);
}
