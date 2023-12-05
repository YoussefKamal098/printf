#include "main.h"

/**
 *  print_number -  print_number
 * @str: str
 * @params: params
 * Return: return
 */
unsigned int print_number(char *str, params_t *params)
{
	if (str == NULL || *str == '\0')
		return (0);

	if (params->minus_flag)
		return (print_number_left_shift(str, params));

	return (print_number_right_shift(str, params));
}

/**
 * is_print_number_sign - is_print_number_sign
 * @params: params
 * @is_neg: is_neg
 * Return: return
 */

int is_print_number_sign(params_t *params, int is_neg)
{
	return ((!params->unsign && params->plus_flag) || is_neg);
}

/**
 * is_print_space - is_print_space
 * @params: params
 * @is_neg: is_neg
 * Return: return
 */
int is_print_space(params_t *params, int is_neg)
{
	return (params->space_flag && !params->plus_flag &&
		!params->unsign && !is_neg);
}

/**
 * is_print_pluse_sign - is_print_pluse_sign
 * @params: params
 * @is_neg: is_neg
 * Return: return
 */

int is_print_pluse_sign(params_t *params, int is_neg)
{
	return (params->plus_flag && !is_neg &&
		!params->unsign);
}
