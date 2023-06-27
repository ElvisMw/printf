
#include "main.h"

/**
 * convert_integer_to_string - Converts integer to string
 * @num: Represents integer to_be converted
 * Return: Numerical value for characters to-be printed
 */
int convert_integer_to_string(int num)
{
	int length = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		length++;
	}

	if (num / 10)
		length += convert_integer_to_string(num / 10);

	_putchar('0' + num % 10);
	length++;

	return (length);
}
