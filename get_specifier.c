#include "main.h"
/**
 * get_print_fun - specify the print function
 *
 * @c: specifier
 * @args: argumetn to be printed
 * Return: int - number of characters printed
 */
int get_print_fun(char c, va_list args)
{
	convert_specifier matches[] = {
	    {'c', print_char},
	    {'s', print_string},
	    {'S', print_printable_letters},
	    {'b', print_bin},
	    {'%', print_percent_sign},
	    {'r', print_rev_s},
	    {'R', print_Srot13},
	    {'o', print_oct},
	    {'x', print_hex},
	    {'X', print_HEX},
	    {'u', print_ui},
	    {'d', print_int},
	    {'i', print_int},
	    /*{'p', print_address},*/
	    {'\0', NULL}};
	int i;

	i = 0;
	while (matches[i].c && matches[i].f)
	{
		if (matches[i].c == c)
			return (matches[i].f(args));
		i++;
	}

	return (0);
}
