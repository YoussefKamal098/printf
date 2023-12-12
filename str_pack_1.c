#include "main.h"

/**
 * _puts - _puts
 * @str : @str
 * Return: number of written bytes
 */

unsigned int _puts(char *str)
{
	unsigned int bytes = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		bytes++;
	}

	return (bytes);
}

/**
 * _strlen - _strlen
 * @str: str
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);

	while (*str)
	{
		str++;
		len++;
	}

	return (len);
}

/**
 * _print_rev_string - _print_rev_string
 * @str:  str
 * Return: length of string
 */

unsigned int _print_rev_string(char *str)
{
	unsigned int len;
	int i;

	if (str == NULL)
		return (0);

	len = _strlen(str);
	i = len;

	for (i = i - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}

/**
 * count_digit - count_digit
 * @num: num
 * @base: base
 * Return: length of number
 */

unsigned int count_digit(unsigned long int num, unsigned int base)
{
	unsigned int len = 0;

	while (num)
	{
		num /= base;
		len++;
	}

	return (len);
}

/**
 * print_from_to - print_from_to
 * @str:str
 * @start: start
 * @end: end
 * @except: except
 * Return: number of written bytes
 */
unsigned int print_from_to(char *str, int start, int end, char except)
{
	unsigned int bytes = 0;

	if (str == NULL || start < 0 || end < 0)
		return (0);

	while (start <= end)
	{
		if (str[start] != except)
			bytes += _putchar(str[start]);
		start++;
	}

	return (bytes);
}
