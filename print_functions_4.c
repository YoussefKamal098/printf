#include "main.h"

/**
 * print_char - print_char
 * @args: args
 * @parameters: parameters
 * Return: return
 */

int print_char(va_list args, parameters_t *parameters)
{
	char c = va_arg(args, int);

	(void)parameters;

	return (_putchar(c));
}

/**
 * print_percent_sign - print_percent_sign
 * @args: args
 * @parameters: parameters
 * Return: return
 */

int print_percent_sign(va_list args, parameters_t *parameters)
{
	(void)args;
	(void)parameters;

	return (_putchar('%'));
}
