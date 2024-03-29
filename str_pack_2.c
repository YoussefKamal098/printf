#include "main.h"

/**
 * str_concat - str_concat
 * @str1 :str1
 * @str2 :str2
 * Return: concatenated string or NULL
 */

char *str_concat(char *str1, char *str2)
{
	unsigned int i, j, str_len = 0;
	char *str;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	str_len = _strlen(str1) + _strlen(str2);

	str = (char *)malloc(str_len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; str1[i] != '\0'; i++)
		str[i] = str1[i];

	for (j = 0; str2[j] != '\0'; i++, j++)
		str[i] = str2[j];

	str[i] = '\0';

	return (str);
}

/**
 * _memset - _memset
 * @str: str
 * @c: c
 * @size: size
 * Return: string of specific character
 */
char *_memset(char *str, char c, unsigned int size)
{
	int i;

	for (i = 0; size > 0; i++, size--)
		str[i] = c;

	return (str);
}
