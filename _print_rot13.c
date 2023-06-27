
#include "main.h"

/**
 * _print_rot13 - Prints a string encoded in rot13.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int _print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int len = _strlen(str);

	str = _rot13(str);

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len);
}
