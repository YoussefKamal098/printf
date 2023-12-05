#include "main.h"
/**
 * convert - convert
 * @num: num
 * @base: base
 * @is_lower: is_lower
 * Return: return
 */

char *convert(long int num, unsigned int base, int is_lower)
{
	unsigned int i, str_len = 0;
	int sign = 0;
	char *digits = is_lower ? "0123456789abcdef" : "0123456789ABCDEF";
	char *str;

	if (num < 0)
	{
		num *= -1;
		sign = 1;
	}

	str_len = num == 0 ? 1 : count_digit(num, base);

	if (sign)
		str_len++;

	str = (char *)malloc(str_len + 1);

	if (str == NULL)
		exit(1);

	str[str_len] = '\0';
	i = str_len - 1;

	if (num == 0)
		str[0] = '0';

	while (num)
	{
		str[i--] = digits[num % base];
		num /= base;
	}

	if (sign)
		str[0] = '-';

	return (str);
}