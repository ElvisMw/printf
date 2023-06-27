#include "main.h"
/**
 * convert_unsigned_to_binary - Converts an unsigned
 * integer to a binary string and prints it
 * @num: The unsigned integer to convert
 *
 * Return: Number of characters printed
 */
int convert_unsigned_to_binary(unsigned int num)
{
	int length = 0;
	char binary[100];
	int e_j = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num != 0)
	{
		binary[e_j] = num % 2 + '0';
		num = num / 2;
		e_j++;
	}

	for (e_j = e_j - 1; e_j >= 0; e_j--)
	{
		_putchar(binary[e_j]);
		length++;
	}

	return (length);
}
