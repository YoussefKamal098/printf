#include "main.h"

/**
 * set_specifier_params - set_specifier_params
 * @format: format
 * @i: i
 * @args: args
 * @params: params
 * Return: index of format
 */

int set_specifier_params(char *format, int i, va_list args, params_t *params)
{
	int *ptr;

	while (set_flag(format[i], params))
		i++;
	ptr = &i;

	set_width((char *)format, ptr, args, params);
	set_precision((char *)format, ptr, args, params);

	i = *ptr;

	if (set_num_modifier(format[i], params))
		i++;
	return (i);
}

/**
 * set_flag - set_flag
 * @c: c
 * @params: params
 * Return: 1 if it set flag 0 otherwise
 */

int set_flag(char c, params_t *params)
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
 * set_num_modifier - set_num_modifier
 * @c: c
 * @params: params
 * Return: 1 if it set modifier 0 otherwise
 */
int set_num_modifier(char c, params_t *params)
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
 * set_width -  set_width
 * @format: format
 * @i: i
 * @args:args
 * @params: params
 * Return: void
 */

void set_width(char *format, int *i, va_list args, params_t *params)
{
	params->width = get_param_num(format, i, args);
}

/**
 * set_precision - set_precision
 * @format: format
 * @i: i
 * @args:args
 * @params: params
 * Return: void
 */
void set_precision(char *format, int *i, va_list args, params_t *params)
{
	if (format[*i] != '.')
		return;
	*i = *i + 1;
	params->precision = get_param_num(format, i, args);
}
