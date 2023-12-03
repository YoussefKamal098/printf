#include "main.h"
/**
 * get_flag - get_flag
 * @c: str
 * @parameters: parameters
 * Return: return
 */

int get_flag(char c, parameters_t *parameters)
{
	switch (c)
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
 * @c: str
 * @parameters: parameters
 * Return: return
 */
int get_modifier(char c, parameters_t *parameters)
{
	switch (c)
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
