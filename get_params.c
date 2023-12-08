#include "main.h"
/**
 * get_flag - get_flag
 * @c: c
 * @params: params
 * Return: return
 */

int get_flag(char c, params_t *params)
{
	switch (c)
	{
	case '+':
		params->plus_flag = 1;
		return (1);
	case ' ':
		params->space_flag = 1;
		return (1);
	case '#':
		params->hashtag_flag = 1;
		return (1);
	case '-':
		params->minus_flag = 1;
		return (1);
	case '0':
		params->zero_flag = 1;
		return (1);
	}

	return (0);
}

/**
 * get_number_modifier - get_number_modifier
 * @c: c
 * @params: params
 * Return: return
 */
int get_number_modifier(char c, params_t *params)
{
	switch (c)
	{
	case 'h':
		params->h_modifier = 1;
		return (1);
	case 'l':
		params->l_modifier = 1;
		return (1);
	}

	return (0);
}

/**
 * get_width -  get_width
 * @format: format
 * @i: i
 * @args:args
 * @params: params
 * Return: return
 */

int get_width(char *format, int i, va_list args, params_t *params)
{
	params->width = get_number_field(format, &i, args);
	return (i);
}

/**
 * get_precision - get_precision
 * @format: format
 * @i: i
 * @args:args
 * @params: params
 * Return: return
 */
int get_precision(char *format, int i, va_list args, params_t *params)
{
	if (format[i] != '.')
		return (i);
	i++;
	params->precision = get_number_field(format, &i, args);

	return (i);
}

/**
 * get_specifier_params - get_specifier_params
 * @format: format
 * @params: params
 * @args: args
 * @i: i
 * Return: return
 */

int get_specifier_params(char *format, va_list args, params_t *params, int i)
{
	while (get_flag(format[i], params))
		i++;

	i = get_width((char *)format, i, args, params);
	i = get_precision((char *)format, i, args, params);

	if (get_number_modifier(format[i], params))
		i++;

	return (i);
}
