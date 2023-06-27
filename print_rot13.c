
#include "main.h"

/**
 * print_rot13 - Prints string via ROT13 encryption
 * @str: String to print
 *
 * Return: Numerical value for characters printed
 */
int print_rot13(char *str)
{
	int length = 0;
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (*str)
	{
		int e_j;
		int found = 0;

		for (e_j = 0; normal[e_j]; e_j++)
		{
			if (*str == normal[e_j])
			{
				_putchar(rot13[e_j]);
				length++;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			_putchar(*str);
			length++;
		}

		str++;
	}

	return (length);
}
