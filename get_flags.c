#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @e_j: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *e_j)
{
	int j, curr_e_j;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_e_j = *e_j + 1; format[curr_e_j] != '\0'; curr_e_j++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curr_e_j] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*e_j = curr_e_j - 1;

	return (flags);
}
