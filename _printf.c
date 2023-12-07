#include "main.h"

/**
 * _printf - _printf
 * @format: format
 * @...: args
 * Return: return
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, start, bytes_count = 0;
	unsigned int (*fn)(va_list, params_t *);
	unsigned int format_len = _strlen((char *)format);
	char except;
	params_t params = PARAMS_INIT;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i])
	{
		init_params(&params);
		if (format[i] == '%')
		{
			start = i;
			i++;
			i = get_specifier_params((char *)format, args, &params, i);
			fn = get_print_fn(format[i]);
			if (fn)
				bytes_count += fn(args, &params);
			else
			{
				if (i >= format_len)
					i = format_len - 1;

				except = params.l_modifier ? 'l' : '\0';
				except = params.h_modifier ? 'h' : '\0';
				bytes_count += print_from_to((char *)format, start, i, except);
			}
		}
		else
			bytes_count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	_putchar(BUFFER_FLUSH);
	return (bytes_count);
}
