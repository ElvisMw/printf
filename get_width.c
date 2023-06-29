#include "main.h"

/**
 * get_width - Calculates the width to-be  printed
 * @format: Formatted string to print the arguments.
 * @e_j: Current index in the format string.
 * @list: Represents list of arguments.
 *
 * Return: Width.
 */
int get_width(const char *format, int *e_j, va_list list)
{
	int curr_j;
	int width = 0;

	for (curr_j = *e_j + 1; format[curr_j] != '\0'; curr_j++)
	{
		if (is_digit(format[curr_j]))
		{
			width *= 10;
			width += format[curr_j] - '0';
		}
		else if (format[curr_j] == '*')
		{
			curr_j++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*e_j = curr_j - 1;

	return (width);
}
