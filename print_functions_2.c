#include "main.h"
/**
 * print_hex - print_hex
 * @args: args
 * Return: return
 */
int print_hex(va_list args)
{
	unsigned int num, bytes;
	char *str;

	num = va_arg(args, unsigned int);
	str = convert(num, 16, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_HEX - print_HEX
 * @args: args
 * Return: return
 */
int print_HEX(va_list args)
{
	unsigned int num, bytes;
	char *str;

	num = va_arg(args, unsigned int);
	str = convert(num, 16, 0);

	bytes = _puts(str);

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
	int bytes;
	char *str;

	str = convert(num, 16, 0);

	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_address - print_address
 * @args: args
 * Return: return
 */

int print_address(va_list args)
{
	unsigned long int num;
	int bytes = 0;
	char *str;

	num = va_arg(args, unsigned long int);

	if (!num)
		return (_puts(NULL_POINTER));

	str = convert(num, 16, 1);

	bytes = _puts("0x") + _puts(str);

	free(str);

	return (bytes);
}
