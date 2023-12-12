#include "main.h"

/**
 * handle_num_modifier -  handle_num_modifier
 * @args: args
 * @params: params
 * Return: modified number
 */
long int handle_num_modifier(va_list args, params_t *params)
{
	if (params->l_modifier)
		return (va_arg(args, long int));
	else if (params->h_modifier)
		return ((short int)va_arg(args, int));
	else
		return ((int)va_arg(args, int));
}

/**
 *  handle_unsigned_num_modifier -  handle_unsigned_num_modifier
 * @args: args
 * @params: params
 * Return: modified number
 */
unsigned long int handle_unsigned_num_modifier(va_list args, params_t *params)
{
	if (params->l_modifier)
		return (va_arg(args, unsigned long int));
	else if (params->h_modifier)
		return ((unsigned short int)va_arg(args, unsigned int));
	else
		return ((unsigned int)va_arg(args, unsigned int));
}
