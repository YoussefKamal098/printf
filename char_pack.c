#include "main.h"

/**
 * _isalpha - a function that checks
 *            if the given char is alphabet or not
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is alphabet
 *         otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}

/**
 * _islower - a function that checks
 *            if the given char is lower or not
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lower
 *         otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}

/**
 * _isupper - a function that checks
 *            if the given char is upper or not
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is upper
 *         otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

/**
 * _to_upper - convert letter to upper case
 *
 * @c: letter to be converted
 * Return: char
 */
char _to_upper(char c)
{
	if (_islower(c))
		return (c - 'a' + 'A');
	else
		return (c);
}

/**
 * _to_lower - convert letter to lower case
 *
 * @c: letter to be converted
 * Return: char
 */
char _to_lower(char c)
{
	if (_isupper(c))
		return (c - 'A' + 'a');
	else
		return (c);
}
