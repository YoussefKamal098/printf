#include "main.h"

/**
 * _printf - _printf
 * @format: format
 * @...: args
 * Return: return
 */

int _printf(const char *format, ...)
{
	int i = 0, bytes_count = 0;
	int (*fn)(va_list, parameters_t *);
	parameters_t parameters = PARAMETERS_INIT;
	char *start, *end;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i])
	{
		init_parameters(&parameters);

		if (format[i] == '%')
		{
			start = format[i];
			end++;

			while (get_flag(end, &parameters))
				end++;
			if (get_modifier(end, &parameters))
				end++;
			fn = get_print_fn(end);

			if (fn)
			{
				bytes_count += fn(args, &parameters);
				i++;
			}
			else
				bytes_count += _putchar(format[i]);
		}
		else
			bytes_count += _putchar(format[i]);
		i++;
	}

	va_end(args);
	_putchar(BUFFER_FLUSH);
	return (bytes_count);
}
