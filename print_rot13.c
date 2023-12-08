#include "main.h"

/**
 * print_rot13 - print_rot13
 * @args: args
 * @params: params
 * Return: return
 */

unsigned int print_rot13(va_list args, params_t *params)
{
	unsigned int i = 0, j, is_print;
	char decrypt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encrypt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(args, char *);

	(void)params;

	while (str[i])
	{
		j = 0;
		is_print = 0;
		while (decrypt[j])
		{
			if (decrypt[j] == str[i])
			{
				is_print = 1;
				_putchar(encrypt[j]);
				break;
			}
			j++;
		}

		if (!is_print)
			_putchar(str[i]);
		i++;
	}

	return (i);
}
