#include "main.h"

/**
 * _putchar - _putchar
 * @c: c
 * Return: 1 or 0 if it failed to write character
 */
int _putchar(char c)
{
	static unsigned int i;
	static char buffer[BUFFER_SIZE];

	if (c == BUFFER_FLUSH || i >= BUFFER_SIZE)
	{
		if (write(1, buffer, i) == -1)
			return (0);

		i = 0;
	}

	if (c != BUFFER_FLUSH)
		buffer[i++] = c;

	return (1);
}

/**
 * _isdigit - _isdigit
 * @c: c
 * Return: 1 if characters is digit 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
