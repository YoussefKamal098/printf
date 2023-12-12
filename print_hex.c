#include "main.h"
/**
 * print_hex - print_hex
 * @args: args
 * @params: params
 * Return: return
 */
int print_hex(va_list args, params_t *params)
{
	unsigned long int num;
	unsigned int bytes = 0;
	char *str, *temp;

	num = handle_unsigned_num_modifier(args, params);
	str = convert(num, 16, 1, 1);

	if (str == NULL)
		return (0);

	if (params->hashtag_flag && num)
	{
		temp = str;
		str = str_concat("0x", str);
		free(temp);

		if (str == NULL)
			return (0);
	}

	params->unsign = 1;
	bytes += print_num(str, params);

	free(str);
	return (bytes);
}

/**
 * print_HEX - print_HEX
 * @args: args
 * @params: params
 * Return: return
 */
int print_HEX(va_list args, params_t *params)
{
	unsigned long int num;
	unsigned int bytes = 0;
	char *str, *temp;

	num = handle_unsigned_num_modifier(args, params);
	str = convert(num, 16, 1, 0);

	if (str == NULL)
		return (0);

	if (params->hashtag_flag && num)
	{
		temp = str;
		str = str_concat("0X", str);
		free(temp);

		if (str == NULL)
			return (0);
	}

	params->unsign = 1;
	bytes += print_num(str, params);

	free(str);
	return (bytes);
}

/**
 * _print_HEX - _print_HEX
 * @num: num
 * Return: return
 */
int _print_HEX(unsigned long int num)
{
	unsigned int bytes;
	char *str;

	str = convert(num, 16, 1, 0);

	if (str == NULL)
		return (0);

	bytes = _puts(str);

	free(str);
	return (bytes);
}
