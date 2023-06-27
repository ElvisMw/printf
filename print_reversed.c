#include "main.h"
/**
 * print_reversed - Prints string in reverse
 * @str: Represents string to print
 *
 * Return: Numerical value for characters printed
 */
int print_reversed(char *str)
{
	int length = 0;
	int e_j = 0;

	while (str[e_j])
		e_j++;

	while (e_j > 0)
	{
		e_j--;
		_putchar(str[e_j]);
		length++;
	}

	return (length);
}
