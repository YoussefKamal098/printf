#include "main.h"

/**
 * _puts - _puts
 * @str : @str
 * Return:return
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
 * Return: return
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
 * Return: return
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
 * Return: return
 */

unsigned int count_digit(long int num, unsigned int base)
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
 * Return: return
 */
unsigned int print_from_to(char *str, unsigned int start, unsigned int end)
{
	unsigned int bytes = 0;

	if (str == NULL)
		return (0);

	while (start <= end)
	{

		bytes += _putchar(str[start]);
		start++;
	}
	return (bytes);
}