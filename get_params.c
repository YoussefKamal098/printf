#include "main.h"
/**
 * get_flag - get_flag
 * @c: str
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
 * get_modifier - get_modifier
 * @c: str
 * @params: params
 * Return: return
 */
int get_modifier(char c, params_t *params)
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

unsigned int get_width(char *format, int i, va_list args, params_t *params)
{
	unsigned int width = 0;

	if (format[i] == '*')
	{
		width = va_arg(args, unsigned int);
		i++;
	}
	else
	{
		while (_isdigit(format[i]))
			width = width * 10 + (format[i++] - '0');
	}

	params->width = width;
	return (i);
}
