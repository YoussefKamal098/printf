#include "main.h"

/**
 * _printf - _printf
 * @format: format
 * @...: args
 * Return: number of written bytes
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, start, bytes = 0;
	unsigned int format_len = _strlen((char *)format);
	int (*printer)(va_list, params_t *);
	char except;
	params_t params = PARAMS_INIT;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	while (format[i])
	{
		init_params(&params);
		if (format[i] == '%')
		{
			start = i;
			i++;
			i = set_specifier_params((char *)format, i, args, &params);
			printer = get_specifier_printer(format[i]);
			if (printer)
				bytes += printer(args, &params);
			else
			{
				if (i >= format_len)
					i = format_len - 1;

				except = params.l_modifier ? 'l' : '\0';
				except = params.h_modifier ? 'h' : except;
				bytes += print_from_to((char *)format, start, i, except);
			}
		}
		else
			bytes += _putchar(format[i]);
		i++;
	}
	va_end(args);
	_putchar(BUFFER_FLUSH);
	return (bytes);
}
