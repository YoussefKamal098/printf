#include "main.h"
/**
 * print_bin - print unsigned int argument converted to binary
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_bin(va_list n)
{
	unsigned int num, i;
	char *str;

	num = va_arg(n, unsigned int);

	str = convert(num, 2);

	i = 0;
	while (str[i])
		_putchar(str[i++]);

	free(str);
	return (i);
}
