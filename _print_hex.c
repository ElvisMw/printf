#include "main.h"

/**
 * _print_hex - Prints a hexadecimal number.
 * @args: The va_list containing the hexadecimal number to print.
 *
 * Return: The number of characters printed.
 */
int _print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	str = _utoa(num, 16);
	_strlower(str);

	int len = _strlen(str);

	for (; *str != '\0'; str++)
		_putchar(*str);

	return (len);
}

/**
 * _strlower - Converts a string to lowercase.
 * @str: The string to convert.
 *
 * Return: The pointer to the converted string.
 */
char *_strlower(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}

	return (str);
}
