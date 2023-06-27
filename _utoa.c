#include "main.h"

/**
 * _utoa - Converts an unsigned integer to a string of a specific base.
 * @value: The unsigned integer value to convert.
 * @base: The base of the number system (e.g., 10 for decimal).
 *
 * Return: The converted string.
 */
char *_utoa(unsigned int value, int base)
{
	static char buffer[32];
	int i = 0;

	if (value == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return (buffer);
	}

	while (value != 0)
	{
		int remainder = value % base;
		buffer[i++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		value = value / base;
	}

	buffer[i] = '\0';

	return (_strrev(buffer));
}
