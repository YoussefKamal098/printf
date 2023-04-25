#include "main.h"
/**
 * print_oct - print unsigned int argument converted to octal
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_oct(va_list n)
{
	unsigned int num, i;
	char *str;

	num = va_arg(n, unsigned int);

	str = convert(num, 8);

	i = 0;
	while (str[i])
		_putchar(str[i++]);

	free(str);
	return (i);
}
