#include "main.h"

/**
 * _print_int - Prints an integer.
 * @args: The va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int _print_int(va_list args)
{
	int num = va_arg(args, int);
	char *str = _itoa(num);
	int len = _strlen(str);

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len);
}
