#include "main.h"
/**
 * convert - convert
 * @num: num
 * @base: base
 * @is_unsigned: is_unsigned
 * @is_lower: is_lower
 * Return: return
 */

char *convert(long int num, unsigned int base, int is_unsigned, int is_lower)
{
	unsigned int i, str_len = 0;
	unsigned long int unsigned_num = num;
	int sign = 0;
	char *digits = is_lower ? "0123456789abcdef" : "0123456789ABCDEF";
	char *str;

	if (!is_unsigned && num < 0)
	{
		unsigned_num = -num;
		sign = 1;
	}

	str_len = unsigned_num == 0 ? 1 : count_digit(unsigned_num, base);

	if (sign)
		str_len++;

	str = (char *)malloc(str_len + 1);

	if (str == NULL)
	{
		_puts("malloc failed in convert function");
		exit(1);
	}

	str[str_len] = '\0';
	i = str_len - 1;

	if (unsigned_num == 0)
		str[0] = '0';

	while (unsigned_num)
	{
		str[i--] = digits[unsigned_num % base];
		unsigned_num /= base;
	}
	if (sign)
		str[0] = '-';

	return (str);
}
