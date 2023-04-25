#include "main.h"
/**
 * print_printable_letters - print printable letters only
 *
 * @arg: string to be printed
 * Return: int - number of characters printed
 */
int print_printable_letters(va_list arg)
{
	char *s;
	int i, num, len;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	i = 0;
	len = 0;
	while (s[i])
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			len += _putchar('\\');
			len += _putchar('x');
			num = s[i];
			if (num < 16)
				len += _putchar('0');
			len += print_2digits_HEX(num);
		}
		else
		{
			len += _putchar(s[i]);
		}

		i++;
	}

	return (len);
}
