#include <stddef.h>
#include "main.h"

/**
 * print_string - Prints string
 * @str: String to-be printed
 *
 * Return: Numerical value for characters printed
 */
int print_string(char *str)
{
	int length = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		length++;
	}

	return (length);
}
