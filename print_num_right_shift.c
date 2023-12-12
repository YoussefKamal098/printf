#include "main.h"

/**
 * print_num_right_shift - print_num_right_shift
 * @str: str
 * @params: params
 * Return: return
 */

int print_num_right_shift(char *str, params_t *params)
{
	unsigned int len, bytes = 0;
	int is_neg = *str == '-';
	int is_print_sign = is_print_num_sign(params, is_neg);
	char pad_char = ' ';

	if (str == NULL || params->minus_flag)
		return (0);
	if (params->zero_flag)
		pad_char = '0';
	if (is_neg)
		str++;

	len = _strlen(str);

	if (is_print_num_space(params, is_neg))
	{
		bytes += _putchar(' ');
		len++;
	}

	if (is_print_num_plus_sign(params, is_neg) && pad_char == '0')
		bytes += _putchar('+');
	if (is_neg && pad_char == '0')
		bytes += _putchar('-');
	if (is_print_sign)
		len++;

	while (len < params->width)
	{
		bytes += _putchar(pad_char);
		len++;
	}

	if (is_print_num_plus_sign(params, is_neg) && pad_char == ' ')
		bytes += _putchar('+');
	if (is_neg && pad_char == ' ')
		bytes += _putchar('-');

	bytes += _puts(str);
	return (bytes);
}
