#include "main.h"

/**
 * _print_binary - Prints a binary number.
 * @args: The va_list containing the binary number to print.
 *
 * Return: The number of characters printed.
 */
int _print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = _utoa(num, 2);
	int len = _strlen(str);

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len);
}
