#include "main.h"

/**
 * _itoa - Converts an integer to a string.
 * @value: The integer value to convert.
 *
 * Return: The converted string.
 */
char *_itoa(int value)
{
	static char buffer[12];
	int i = 0;
	int is_negative = 0;

	if (value == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return (buffer);
	}

	if (value < 0)
	{
		is_negative = 1;
		value = -value;
	}

	while (value != 0)
	{
		int remainder = value % 10;
		buffer[i++] = remainder + '0';
		value = value / 10;
	}

	if (is_negative)
		buffer[i++] = '-';

	buffer[i] = '\0';

	return (_strrev(buffer));
}
