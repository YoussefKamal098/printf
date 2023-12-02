#include "main.h"

/**
 * print_char - print_char
 * @args: args
 * Return: return
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_percent_sign - print_percent_sign
 * @args: args
 * Return: return
 */

int print_percent_sign(va_list args)
{
	(void)args;

	return (_putchar('%'));
}
