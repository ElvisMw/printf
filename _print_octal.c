#include "main.h"

/**
 * _print_octal - Prints an octal number.
 * @args: The va_list containing the octal number to print.
 *
 * Return: The number of characters printed.
 */
int _print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = _utoa(num, 8);
	int len = _strlen(str);

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len);
}
