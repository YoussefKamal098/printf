#include "main.h"

/**
 *  print_number -  print_number
 * @str: str
 * @params: params
 * Return: return
 */
unsigned int print_number(char *str, params_t *params)
{
	unsigned int bytes = 0;
	char *temp = str;

	if (str == NULL || *str == '\0')
		return (0);

	str = handle_number_precision(str, params);

	if (str == NULL)
		return (0);

	if (params->minus_flag)
		bytes = print_number_left_shift(str, params);
	else
		bytes = print_number_right_shift(str, params);

	if (temp != str)
		free(str);

	return (bytes);
}

/**
 * handle_number_precision -handle_number_precision
 * @str: str
 * @params: params
 * Return: return
 */
char *handle_number_precision(char *str, params_t *params)
{
	unsigned int len, zeros_len = 0, i;
	char *zeros_pad, *temp;
	int is_neg = *str == '-';

	if (str == NULL)
		return (NULL);
	if (params->precision == UINT_MAX)
		return (str);
	if (!params->precision && *str == '0' && !str[1])
		str = "";

	if (is_neg)
		str++;

	len = _strlen(str);

	if (params->precision != UINT_MAX)
		while (len++ < params->precision)
			zeros_len++;

	zeros_pad = (char *)malloc(zeros_len + 1);
	if (zeros_pad == NULL)
		return (NULL);

	zeros_pad[zeros_len] = '\0';
	for (i = 0; i < zeros_len; i++)
		zeros_pad[i] = '0';

	str = str_concat(zeros_pad, str);
	free(zeros_pad);

	if (is_neg)
	{
		temp = str;
		str = str_concat("-", str);
		free(temp);
	}
	return (str);
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
	return (
	    params->space_flag && !params->plus_flag &&
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
	return (
	    params->plus_flag && !is_neg &&
	    !params->unsign);
}
