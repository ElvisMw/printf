#include "main.h"

/**
 * convert_unsigned_to_string - Converts unsigned integer to string
 * @num: Unsigned integer to-be converted
 *
 * Return: Numerical value for characters printed
 */
int convert_unsigned_to_string(unsigned int num)
{
	int length = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	if (num / 10)
		length += convert_unsigned_to_string(num / 10);

	_putchar('0' + num % 10);
	length++;

	return length;
}

/**
 * convert_unsigned_to_octal - Converts unsigned integer to octal_string
 * @num: Unsigned integer to-be converted
 * Return: Numerical value for characters printed
 */
int convert_unsigned_to_octal(unsigned int num)
{
	int length = 0;
	char octal[100];
	int e_j = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	while (num != 0)
	{
		octal[e_j] = num % 8 + '0';
		num = num / 8;
		e_j++;
	}

	for (e_j = e_j - 1; e_j >= 0; e_j--)
	{
		_putchar(octal[e_j]);
		length++;
	}

	return length;
}

/**
 * convert_unsigned_to_hexadecimal - Converts unsigned integer hexadecimal string
 * @num: Unsigned integer to be converted
 * @uppercase: Flag showing either to apply uppercase (1) or lowercase letters (0)
 *
 * Return: Numerical value for characters printed
 */
int convert_unsigned_to_hexadecimal(unsigned int num, int uppercase)
{
	int length = 0;
	char hex[100];
	int e_j = 0;
	int rem;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[e_j] = rem + '0';
		else
		{
			if (uppercase)
				hex[e_j] = rem - 10 + 'A';
			else
				hex[e_j] = rem - 10 + 'a';
		}
		num = num / 16;
		e_j++;
	}

	for (e_j = e_j - 1; e_j >= 0; e_j--)
	{
		_putchar(hex[e_j]);
		length++;
	}

	return length;
}

/**
 * convert_unsigned_to_binary - Converts unsigned integer to binary string
 * @num: Unsigned integer to-be converted
 *
 * Return: Numerical value for characters printed
 */
int convert_unsigned_to_binary(unsigned int num)
{
	int length = 0;
	char binary[100];
	int e_j = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
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

	return length;
}
