#include "main.h"
/**
 * get_flag - get_flag
 * @str: str
 * @parameters: parameters
 * Return: return
 */

int get_flag(char *str, parameters_t *parameters)
{
	switch (*str)
	{
	case '+':
		parameters->plus_flag = 1;
		return (1);
	case ' ':
		parameters->space_flag = 1;
		return (1);
	case '#':
		parameters->hashtag_flag = 1;
		return (1);
	case '-':
		parameters->minus_flag = 1;
		return (1);
	case '0':
		parameters->zero_flag = 1;
		return (1);
	}

	return (0);
}

/**
 * get_modifier - get_modifier
 * @str: str
 * @parameters: parameters
 * Return: return
 */
int get_modifier(char *str, parameters_t *parameters)
{
	switch (*str)
	{
	case 'h':
		parameters->h_modifier = 1;
		return (1);
	case 'l':
		parameters->l_modifier = 1;
		return (1);
	}

	return (0);
}
