
#include "main.h"

/**
 * _print_non_printable - Prints non-printable characters.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int _print_non_printable(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			len += _print_hex_value(*str);
		}
		else
		{
			_putchar(*str);
			len++;
		}

		str++;
	}

	return (len);
}

/**
 * _print_hex_value - Prints the hexadecimal value of a character.
 * @value: The character value.
 *
 * Return: The number of characters printed.
 */
int _print_hex_value(unsigned char value)
{
	int count = 0;
	unsigned char hex1 = (value / 16) % 16;
	unsigned char hex2 = value % 16;

	count += _putchar(hex1 < 10 ? hex1 + '0' : hex1 - 10 + 'a');
	count += _putchar(hex2 < 10 ? hex2 + '0' : hex2 - 10 + 'a');

	return (count);
}
