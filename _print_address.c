
#include "main.h"

/**
 * _print_address - Prints the address of a pointer.
 * @args: The va_list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int _print_address(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int address = (unsigned long int)ptr;
	char *str = _utoa(address, 16);
	int len = _strlen(str);

	_putchar('0');
	_putchar('x');

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len + 2);
}
