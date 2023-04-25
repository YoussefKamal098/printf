#include "main.h"
/**
 * print_string - function to print string
 *
 * @x: char to be printed
 * Return: int - length of the string
 */
int print_string(va_list x)
{
	char *s;
	int i;

	i = 0;
	s = va_arg(x, char *);
	if (s == NULL)
		s = "(null)";

	while (s[i])
		_putchar(s[i++]);

	return (i);
}
