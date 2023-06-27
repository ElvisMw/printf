
#include "main.h"

/**
 * _print_reverse - Prints a string in reverse.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int _print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int len = _strlen(str);

	str = _strrev(str);

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len);
}
