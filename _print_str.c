#include "main.h"

/**
 * _print_str - Prints a string.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int _print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	len = _strlen(str);

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len);
}
