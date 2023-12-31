#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @e_j: List of arguments to be printed.
 * @list:represents list of arguments.
 *
 * Return: upon completion Precision.
 */
int get_precision(const char *format, int *e_j, va_list list)
{
	int curr_e_j = *e_j + 1;
	int precision = -1;

	if (format[curr_e_j] != '.')
		return (precision);

	precision = 0;

	for (curr_e_j += 1; format[curr_e_j] != '\0'; curr_e_j++)
	{
		if (is_digit(format[curr_e_j]))
		{
			precision *= 10;
			precision += format[curr_e_j] - '0';
		}
		else if (format[curr_e_j] == '*')
		{
			curr_e_j++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*e_j = curr_e_j - 1;

	return (precision);
}

