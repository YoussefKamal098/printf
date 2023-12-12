#include "main.h"

/**
 * get_specifier_params - get_specifier_params
 * @format: format
 * @i: i
 * @args: args
 * @params: params
 * Return: return
 */

int get_specifier_params(char *format, int i, va_list args, params_t *params)
{
	int *ptr;

	while (get_flag(format[i], params))
		i++;
	ptr = &i;

	get_width((char *)format, ptr, args, params);
	get_precision((char *)format, ptr, args, params);

	i = *ptr;

	if (get_num_modifier(format[i], params))
		i++;
	return (i);
}

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
 * get_num_modifier - get_num_modifier
 * @c: c
 * @params: params
 * Return: return
 */
int get_num_modifier(char c, params_t *params)
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

void get_width(char *format, int *i, va_list args, params_t *params)
{
	params->width = get_num_field(format, i, args);
}

/**
 * get_precision - get_precision
 * @format: format
 * @i: i
 * @args:args
 * @params: params
 * Return: return
 */
void get_precision(char *format, int *i, va_list args, params_t *params)
{
	if (format[*i] != '.')
		return;
	*i = *i + 1;
	params->precision = get_num_field(format, i, args);
}
