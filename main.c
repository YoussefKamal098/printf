#include "main.h"

/**
 * main - main
 * Return: return
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	char *str = NULL;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Address:[%p]\n", addr);
	len2 = printf("Address:[%p]\n", addr);
	printf("[%d]\n", len);
	printf("[%d]\n", len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = printf("Percent:[%s]\n", "Youssef");
	_printf("Len:[%r %d]\n", "Youssef", len);
	_printf("[%s]\n", str);
	_printf("[%p]\n", NULL);
	printf("[%s]\n", str);
	printf("[%p]\n", NULL);
	str = "asdgsa";
	addr = str;
	_printf("[%p]\n", addr);
	printf("[%p]\n", addr);
	/*_printf("Unknown:[%r]\n");*/
	/*printf("Unknown:[%r]\n");*/

	return (0);
}
