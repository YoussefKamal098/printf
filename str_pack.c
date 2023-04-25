#include "main.h"
/**
 * _putchar - fuction to print one letter
 *
 * @c: letter to be printed
 *
 * Return: int - 1 (Success),
 * -1 (Failed)
 */
int _putchar(char c)
{
	static int curr_buf_size;
	static char buffer[OUT_BUF_SIZE];

	if (c == BUF_FLUSH || curr_buf_size >= OUT_BUF_SIZE)
	{
		write(1, buffer, curr_buf_size);
		curr_buf_size = 0;
	}

	if (c != BUF_FLUSH)
		buffer[curr_buf_size++] = c;

	return (1);
}

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string to return it's length
 * Return: The length of the string (int)
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
