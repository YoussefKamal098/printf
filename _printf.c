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
	params_t params = PARAMS_INIT;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i])
	{
		init_params(&params);

		if (format[i] == '%')
		{
			start = i;
			i++;
			while (get_flag(format[i], &params))
				i++;
			i = get_width((char *)format, i, args, &params);
			i = get_precision((char *)format, i, args, &params);

			if (get_modifier(format[i], &params))
				i++;
			fn = get_print_fn(format[i]);

			if (fn)
			{
				bytes_count += fn(args, &params);
			}
			else
				bytes_count += print_from_to((char *)format, start, i);
		}
		else
			bytes_count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	_putchar(BUFFER_FLUSH);
	return (bytes_count);
}
