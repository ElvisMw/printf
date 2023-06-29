#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: represents formatted string in which to print the arguments
 * @e_j: List of arguments to be printed.
 *
 * Return: Precision upon completion.
 */
int get_size(const char *format, int *e_j)
{
	int curr_e_j = *e_j + 1;
	int size = 0;

	if (format[curr_e_j] == 'l')
		size = S_LONG;
	else if (format[curr_e_j] == 'h')
		size = S_SHORT;

	if (size == 0)
		*e_j = curr_e_j - 1;
	else
		*e_j = curr_e_j;

	return (size);
}

