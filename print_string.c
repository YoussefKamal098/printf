#include "main.h"

/**
 * print_string - print_string
 * @args: args
 * @params: params
 * Return: return
 */

unsigned int print_string(va_list args, params_t *params)
{
	char *str;

	(void)params;

	str = va_arg(args, char *);
	if (str == NULL)
		str = NULL_STRING;

	return (_puts(str));
}
