#include "main.h"

/**
 * print_num_left_shift -   print_num_left_shift
 * @str: str
 * @params: params
 * Return: number of written bytes
 */
int print_num_left_shift(char *str, params_t *params)
{
	unsigned int len, bytes = 0;
	int is_neg = *str == '-';
	char pad_char = ' ';

	if (str == NULL || !params->minus_flag)
		return (0);

	if (is_neg)
		str++;

	len = _strlen(str);

	if (is_print_num_space(params, is_neg))
	{
		bytes += _putchar(' ');
		len++;
	}
	if (is_print_num_plus_sign(params, is_neg))
	{
		bytes += _putchar('+');
		len++;
	}
	if (is_neg)
	{
		bytes += _putchar('-');
		len++;
	}

	bytes += _puts(str);

	while (len < params->width)
	{
		bytes += _putchar(pad_char);
		len++;
	}

	return (bytes);
}
