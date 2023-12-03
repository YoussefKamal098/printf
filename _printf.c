#include "main.h"

/**
 * _printf - _printf
 * @format: format
 * @...: args
 * Return: return
 */

int _printf(const char *format, ...)
{
	int i = 0, start, bytes_count = 0;
	int (*fn)(va_list, parameters_t *);
	parameters_t parameters = PARAMETERS_INIT;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i])
	{
		init_parameters(&parameters);

		if (format[i] == '%')
		{
			start = i;
			i++;
			while (get_flag(format[i], &parameters))
				i++;
			if (get_modifier(format[i], &parameters))
				i++;
			fn = get_print_fn(format[i]);

			if (fn)
			{
				bytes_count += fn(args, &parameters);
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
