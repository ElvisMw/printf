#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: The pointer to the destination string.
 */
char *_strcat(char *dest, const char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0';

	return (dest);
}
