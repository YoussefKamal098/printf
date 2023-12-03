#include "main.h"

/**
 * _puts - _puts
 * @str : @str
 * Return:return
 */

int _puts(char *str)
{
	int bytes = 0;

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
int _strlen(char *str)
{
	int len = 0;

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

int _print_rev_string(char *str)
{
	int len = _strlen(str);
	int i = len;

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

int count_digit(long int num, unsigned int base)
{
	int len = 0;

	while (num)
	{
		num /= base;
		len++;
	}

	return (len);
}

/**
 * print_from_to - print_from_to
 * @start: start
 * @end: end
 * @except: except
 * Return: return
 */
int print_from_to(char *start, char *end, char *except)
{
	unsigned int bytes = 0;

	while (start <= end)
	{
		if (start != except)
			bytes += _putchar(*start);
		start++;
	}
	return (bytes);
}
