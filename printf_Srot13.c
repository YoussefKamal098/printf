#include "main.h"
/**
 * print_Srot13 - print string in rot13 formate
 *
 * @arg: string to be printed
 * Return: int - number of characters printed
 */
int print_Srot13(va_list arg)
{
	char *str;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, ok;

	i = 0;
	str = va_arg(arg, char *);
	while (str[i])
	{
		j = 0;
		ok = 0;
		while (in[j])
		{
			if (in[j] == str[i])
			{
				ok = 1;
				_putchar(out[j]);
				break;
			}
			j++;
		}
		if (!ok)
			_putchar(str[i]);
		i++;
	}

	return (i);
}
