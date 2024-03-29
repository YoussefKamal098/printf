#include "main.h"

/**
 *  print_num -  print_num
 * @str: str
 * @params: params
 * Return: number of written bytes
 */
int print_num(char *str, params_t *params)
{
	unsigned int bytes = 0;
	char *temp = str;

	if (str == NULL || *str == '\0')
		return (0);

	str = handle_num_precision(str, params);

	if (str == NULL)
		return (0);

	if (params->minus_flag)
		bytes = print_num_left_shift(str, params);
	else
		bytes = print_num_right_shift(str, params);

	if (temp != str)
		free(str);

	return (bytes);
}

/**
 * is_print_num_sign - is_print_num_sign
 * @params: params
 * @is_neg: is_neg
 * Return: 1 if condition true otherwise 0
 */

int is_print_num_sign(params_t *params, int is_neg)
{
	return ((!params->unsign && params->plus_flag) || is_neg);
}

/**
 * is_print_num_space - is_print_num_space
 * @params: params
 * @is_neg: is_neg
 * Return: 1 if condition true otherwise 0
 */
int is_print_num_space(params_t *params, int is_neg)
{
	return (
	    params->space_flag && !params->plus_flag &&
	    !params->unsign && !is_neg);
}

/**
 * is_print_num_plus_sign - is_print_num_plus_sign
 * @params: params
 * @is_neg: is_neg
 * Return: 1 if condition true otherwise 0
 */

int is_print_num_plus_sign(params_t *params, int is_neg)
{
	return (
	    params->plus_flag && !is_neg &&
	    !params->unsign);
}

/**
 * handle_num_precision -handle_num_precision
 * @str: str
 * @params: params
 * Return: number in string format with padding zeros
 */
char *handle_num_precision(char *str, params_t *params)
{
	unsigned int len, zeros_len = 0;
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

	_memset(zeros_pad, '0', zeros_len);
	zeros_pad[zeros_len] = '\0';

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
