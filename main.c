#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stddef.h>
/**
 * main - star of entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len_1;
	int len_2;
	unsigned int ui;
	void *addr;

	len_1 = _printf("Elvoh and Jimmy's group project.\n");
	len_2 = printf("Elvoh and Jimmy's group project.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len_1, len_1);
	printf("Length:[%d, %i]\n", len_2, len_2);
	_printf("Negative:[%d]\n", -7628934);
	printf("Negative:[%d]\n", -7628934);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'G');
	printf("Character:[%c]\n", 'G');
	_printf("String:[%s]\n", "This is good !");
	printf("String:[%s]\n", "This is good !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len_1 = _printf("Percent:[%%]\n");
	len_2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len_1);
	printf("Len:[%d]\n", len_2);
	_printf("Unknown:[%r]\n");

	return (0);
}
