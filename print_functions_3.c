#include "main.h"

/**
 * print_string - print_string
 * @args: args
 * Return: return
 */

int print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = NULL_STRING;

	return (_puts(str));
}

/**
 * print_printable_letters - print_printable_letters
 * @args: args
 * Return: return
 */

int print_printable_letters(va_list args)
{
	int i, num, bytes;
	char *str;

	str = va_arg(args, char *);

	i = 0;
	bytes = 0;

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

/**
 * print_rot13 - print_rot13
 * @args: args
 * Return: return
 */

int print_rot13(va_list args)
{
	int i, j, is_print;
	char decrypt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encrypt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;

	i = 0;
	str = va_arg(args, char *);

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

/**
 * print_rev_string - print_rev_string
 * @args: args
 * Return: return
 */
int print_rev_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = NULL_STRING;

	return (_print_rev_string(str));
}
