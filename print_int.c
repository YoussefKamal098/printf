#include "main.h"
/**
 * print_ui - print unsigned int argument
 *
 * @n: number to be converted and printed
 * Return: int - number of characters printed
 */
int print_ui(va_list n)
{
	unsigned int num, i;
	char *str;

	num = va_arg(n, unsigned int);

	str = convert(num, 10);

	i = 0;
	while (str[i])
		_putchar(str[i++]);

	free(str);
	return (i);
}

/**
  * print_int - function to print signed integers
  * Return: int - number of characters printed
  * @n: the integer to be printed
  */

int print_int(va_list n)
{
	int num, i;
	char *str;

	num = va_arg(n, signed int);
	if (!num)
		str = "(nil)";
	else
		str = signed_converter(num, 10);
	i = 0;

	while (str[i])
		_putchar(str[i++]);
	free(str);
	return (i);
}
