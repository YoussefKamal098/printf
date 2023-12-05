#include "main.h"
/**
 * get_print_fn - get_print_fn
 * @specifier: specifier
 * Return: return
 */

unsigned int (*get_print_fn(char specifier))(va_list args, params_t *params)
{
	specifier_t specifiers[] = {
	    {'c', print_char},
	    {'s', print_string},
	    {'S', print_printable_letters},
	    {'b', print_bin},
	    {'%', print_percent_sign},
	    {'r', print_rev_string},
	    {'R', print_rot13},
	    {'o', print_oct},
	    {'x', print_hex},
	    {'X', print_HEX},
	    {'u', print_unsigned_int},
	    {'d', print_int},
	    {'i', print_int},
	    {'p', print_address},
	    {'\0', NULL}};
	unsigned int i = 0;

	while (specifiers[i].type && specifiers[i].fn)
	{
		if (specifiers[i].type == specifier)
			return (specifiers[i].fn);
		i++;
	}

	return (NULL);
}
