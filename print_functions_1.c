#include "main.h"
/**
 * print_unsigned_int - print_unsigned_int
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_unsigned_int(va_list args, parameters_t *parameters)
{
	unsigned int num, bytes;
	char *str;

	(void)parameters;

	num = va_arg(args, unsigned int);
	str = convert(num, 10, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_int -  print_int
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_int(va_list args, parameters_t *parameters)
{
	int num, bytes;
	char *str;

	(void)parameters;

	num = va_arg(args, int);
	str = convert(num, 10, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_bin - print_bin
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_bin(va_list args, parameters_t *parameters)
{
	unsigned int num, bytes;
	char *str;

	(void)parameters;

	num = va_arg(args, unsigned int);
	str = convert(num, 2, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}

/**
 * print_oct - print_oct
 * @args: args
 * @parameters: parameters
 * Return: return
 */
int print_oct(va_list args, parameters_t *parameters)
{
	unsigned int num, bytes;
	char *str;

	(void)parameters;

	num = va_arg(args, unsigned int);
	str = convert(num, 8, 1);

	bytes = _puts(str);

	free(str);
	return (bytes);
}
