#include "main.h"

/**
 * _strrev - Reverses a string.
 * @str: The string to reverse.
 *
 * Return: The pointer to the reversed string.
 */
char *_strrev(char *str)
{
	int start = 0;
	int end = _strlen(str) - 1;

	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}

	return (str);
}
