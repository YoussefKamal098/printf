#include "main.h"
/**
 * convert - function that conver number base
 *
 * @num: number to convert
 * @base: base to convert to
 * Return: char* - number after convert
 */
char *convert(unsigned int num, unsigned int base)
{
	unsigned int i, j, mem_size;
	char *str, *str2;
	char base16[] = {'A', 'B', 'C', 'D', 'E', 'F'};

	if (num == 0)
		return ("0");
	mem_size = 1;
	str = malloc(sizeof(char) * mem_size++);
	if (str == NULL)
		exit(1);

	i = 0;
	while (num)
	{
		if (num % base >= 10)
			str[i++] = base16[(num % base) - 10];
		else
			str[i++] = (num % base) + '0';
		num /= base;
		str = realloc(str, sizeof(char) * mem_size++);
		if (str == NULL)
		{
			free(str);
			exit(1);
		}
	}
	str[i] = '\0';
	str2 = malloc(sizeof(char) * i + 1);

	i--;
	j = 0;
	while (i)
		str2[j++] = str[i--];

	str2[j++] = str[i];
	str2[j] = '\0';
	free(str);
	return (str2);
}

char *signed_converter(int num, int base)
{
	int i = 0, j, mem_size = 1;
	char *str, *str2;
	char base_alpha[] = {'A', 'B', 'C', 'D', 'E', 'F'};

	str = malloc(sizeof(char) * mem_size++);
	if (str == NULL)
		exit(1);

	if (num < 0)
	{
		str[i++] = '-';
		num *= -1;
		str = realloc(str, sizeof(char) * mem_size++);
		if (str == NULL)
		{
			free(str);
			exit(1);
		}
	}
	while (num)
	{
		if (num % base >= 10)
			str[i++] = base_alpha[(num % base) - 10];
		else
			str[i++] = (num % base) + '0';
		num /= base;
		str = realloc(str, sizeof(char) * mem_size++);
		if (str == NULL)
		{
			free(str);
			exit(1);
		}
	}
	str[i] = '\0';
	str2 = malloc(sizeof(char) * i + 1);

	i--;
	j = 0;
	if (str[0] == '-')
	{
		j++;
		while (i)
			str2[j++] = str[i--];
		str2[0] = '-';
	}
	else
	{
		while (i)
			str2[j++] = str[i--];
		str2[j++] = str[i];
	}
	str2[j] = '\0';
	free(str);
	return (str2);
}
