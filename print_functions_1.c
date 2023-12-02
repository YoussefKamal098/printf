#include "main.h"
/**
 * print_unsigned_int - print_unsigned_int
 * @args: args
 * Return: return
 */
int print_unsigned_int(va_list args)
{
	unsigned int num, bytes;
	char *str;

	num = va_arg(args, unsigned int);
	str = convert(num, 10, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_int -  print_int
 * @args: args
 * Return: return
 */
int print_int(va_list args)
{
	int num, bytes;
	char *str;

	num = va_arg(args, signed int);
	str = convert(num, 10, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_bin - print_bin
 * @args: args
 * Return: return
 */
int print_bin(va_list args)
{
	unsigned int num, bytes;
	char *str;

	num = va_arg(args, unsigned int);
	str = convert(num, 2, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_oct - print_oct
 * @args: args
 * Return: return
 */
int print_oct(va_list args)
{
	unsigned int num, bytes;
	char *str;

	num = va_arg(args, unsigned int);
	str = convert(num, 8, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}
