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
	_printf("Unsigned hexadecimal:[%#x, %#X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%#x, %#X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	/*_printf("Unknown:[%r]\n");*/
	/*printf("Unknown:[%r]\n");*/

	len = printf("%.*s\n", 6, "Best School !\n");
	len2 = _printf("%.*s\n", 6, "Best School !\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = printf("%.6s\n", "Best School !\n");
	len2 = _printf("%.6s\n", "Best School !\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	printf("--------------------------------------------------\n");

	len = printf("[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n", 6, INT_MAX, 6, INT_MAX, 6, INT_MIN, 6, INT_MIN, 6, 0, 6, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n", 0, INT_MAX, 0, INT_MAX, 0, INT_MIN, 0, INT_MIN, 0, 0, 0, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n", 6, 98, 6, 98, 6, -98, 6, -98);
	printf("Len:[%d]\n", len);
	len = printf("[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n", 0, 98, 0, 98, 0, -98, 0, -98);
	printf("Len:[%d]\n", len);

	printf("####################################################\n");

	len2 = _printf("[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n", 6, INT_MAX, 6, INT_MAX, 6, INT_MIN, 6, INT_MIN, 6, 0, 6, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n", 0, INT_MAX, 0, INT_MAX, 0, INT_MIN, 0, INT_MIN, 0, 0, 0, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n", 6, 98, 6, 98, 6, -98, 6, -98);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%-6.*d];[%-6.*i]\n[%-6.*d];[%-6.*i]\n", 0, 98, 0, 98, 0, -98, 0, -98);
	_printf("Len:[%d]\n", len2);

	printf("--------------------------------------------------\n");

	len = printf("[%-6.6d];[%-6.6i]\n[%-6.6d];[%-6.6i]\n[%-6.6d];[%-6.6i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%-6.0d];[%-6.0i]\n[%-6.0d];[%-6.0i]\n[%-6.0d];[%-6.0i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%-6.d];[%-6.i]\n[%-6.d];[%-6.i]\n[%-6.d];[%-6.i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%-6.6d];[%-6.6i]\n[%-6.6d];[%-6.6i]\n", 98, 98, -98, -98);
	printf("Len:[%d]\n", len);
	len = printf("[%-6.0d];[%-6.0i]\n[%-6.0d];[%-6.0i]\n", 98, 98, -98, -98);
	printf("Len:[%d]\n", len);
	len = printf("[%-6.d];[%-6.i]\n[%-6.d];[%-6.i]\n", 98, 98, -98, -98);
	printf("Len:[%d]\n", len);

	printf("####################################################\n");

	len2 = _printf("[%-6.6d];[%-6.6i]\n[%-6.6d];[%-6.6i]\n[%-6.6d];[%-6.6i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%-6.0d];[%-6.0i]\n[%-6.0d];[%-6.0i]\n[%-6.0d];[%-6.0i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%-6.d];[%-6.i]\n[%-6.d];[%-6.i]\n[%-6.d];[%-6.i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%-6.6d];[%-6.6i]\n[%-6.6d];[%-6.6i]\n", 98, 98, -98, -98);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%-6.0d];[%-6.0i]\n[%-6.0d];[%-6.0i]\n", 98, 98, -98, -98);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%-6.d];[%-6.i]\n[%-6.d];[%-6.i]\n", 98, 98, -98, -98);
	printf("Len:[%d]\n", len2);

	printf("--------------------------------------------------\n");

	len = printf("[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n", 6, INT_MAX, 6, INT_MAX, 6, INT_MIN, 6, INT_MIN, 6, 0, 6, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n", 0, INT_MAX, 0, INT_MAX, 0, INT_MIN, 0, INT_MIN, 0, 0, 0, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n", 6, 98, 6, 98, 6, -98, 6, -98);
	printf("Len:[%d]\n", len);
	len = printf("[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n", 0, 98, 0, 98, 0, -98, 0, -98);
	printf("Len:[%d]\n", len);

	printf("####################################################\n");

	len2 = _printf("[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n", 6, INT_MAX, 6, INT_MAX, 6, INT_MIN, 6, INT_MIN, 6, 0, 6, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n", 0, INT_MAX, 0, INT_MAX, 0, INT_MIN, 0, INT_MIN, 0, 0, 0, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n", 6, 98, 6, 98, 6, -98, 6, -98);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%6.*d];[%6.*i]\n[%6.*d];[%6.*i]\n", 0, 98, 0, 98, 0, -98, 0, -98);
	_printf("Len:[%d]\n", len2);

	printf("--------------------------------------------------\n");

	len = printf("[%6.6d];[%6.6i]\n[%6.6d];[%6.6i]\n[%6.6d];[%6.6i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%6.0d];[%6.0i]\n[%6.0d];[%6.0i]\n[%6.0d];[%6.0i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%6.d];[%6.i]\n[%6.d];[%6.i]\n[%6.d];[%6.i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	printf("Len:[%d]\n", len);
	len = printf("[%6.6d];[%6.6i]\n[%6.6d];[%6.6i]\n", 98, 98, -98, -98);
	printf("Len:[%d]\n", len);
	len = printf("[%6.0d];[%6.0i]\n[%6.0d];[%6.0i]\n", 98, 98, -98, -98);
	printf("Len:[%d]\n", len);
	len = printf("[%6.d];[%6.i]\n[%6.d];[%6.i]\n", 98, 98, -98, -98);
	printf("Len:[%d]\n", len);

	printf("####################################################\n");

	len2 = _printf("[%6.6d];[%6.6i]\n[%6.6d];[%6.6i]\n[%6.6d];[%6.6i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%6.0d];[%6.0i]\n[%6.0d];[%6.0i]\n[%6.0d];[%6.0i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%6.d];[%6.i]\n[%6.d];[%6.i]\n[%6.d];[%6.i]\n", INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 0);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%6.6d];[%6.6i]\n[%6.6d];[%6.6i]\n", 98, 98, -98, -98);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%6.0d];[%6.0i]\n[%6.0d];[%6.0i]\n", 98, 98, -98, -98);
	_printf("Len:[%d]\n", len2);
	len2 = _printf("[%6.d];[%6.i]\n[%6.d];[%6.i]\n", 98, 98, -98, -98);
	_printf("Len:[%d]\n", len2);

	return (0);
}
