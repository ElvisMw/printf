#include "main.h"

/**
 * _print_unsigned_int - Prints an unsigned integer.
 * @args: The va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _print_unsigned_int(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = _utoa(num, 10);
	int len = _strlen(str);

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len);
}
