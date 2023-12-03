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
	char **str2 = NULL;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Length:[%d, %i]\n", len, len);
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
	str2 = &str;
	addr = str;
	_printf("[%p]\n", addr);
	printf("[%p]\n", addr);
	len = _printf("[%d]\n");
	len2 = printf("[%d]\n", -819251897);
	printf("[%i %i]\n", len, len2);
	printf("[%i %i]\n", len, len2);
	_printf("[%d]\n", 0);
	str = "asgas";
	_printf("[%p]\n", 0);
	_printf("[%p]\n", NULL);
	_printf("[%p]\n", "sdgsdg");
	_printf("[%p]\n", 1257);
	_printf("[%p]\n", -1257);
	_printf("[%p]\n", *str2);
	_printf("[%lX]\n", 10000000000);
	_printf("[%lhksdg%lx%lhksdg%lo]\n", 10000000000, 10000000000);
	_printf("[%lhksdg%lx%lhksdg%lo]\n", 10000000000, 10000000000);
	_printf("[%  i]\n", -76786);
	_printf("[%  d]\n", 76786);
	_printf("[%  d]\n", -76786);
	_printf("[%  +p]\n", -76786);
	/*_printf("[%p]\n", *str2);
	printf("[%p]\n", &str2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");*/
	return (0);
}
