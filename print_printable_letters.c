#include "main.h"

/**
 * print_printable_letters - print_printable_letters
 * @args: args
 * @params: params
 * Return: return
 */

int print_printable_letters(va_list args, params_t *params)
{
	unsigned int i = 0, bytes = 0;
	int num;
	char *str;

	(void)params;

	str = va_arg(args, char *);

	while (str[i])
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			bytes += _puts("\\x");
			num = str[i];

			if (num < 16)
				bytes += _putchar('0');
			bytes += _print_HEX(num);
		}
		else
		{
			bytes += _putchar(str[i]);
		}

		i++;
	}

	return (bytes);
}
