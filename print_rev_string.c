#include "main.h"

/**
 * print_rev_string - print_rev_string
 * @args: args
 * @params: params
 * Return: return
 */
int print_rev_string(va_list args, params_t *params)
{
	char *str = va_arg(args, char *);

	(void)params;

	if (str == NULL)
		str = NULL_STRING;

	return (_print_rev_string(str));
}
