#include "main.h"

/**
 * print_char - print_char
 * @args: args
 * @params: params
 * Return: return
 */

unsigned int print_char(va_list args, params_t *params)
{
	char c = va_arg(args, int);

	(void)params;

	return (_putchar(c));
}
