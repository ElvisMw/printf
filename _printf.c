#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: A character string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, len = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			switch (format[i])
			{
				case 'c':
					len += _print_char(args);
					break;
				case 's':
					len += _print_str(args);
					break;
				case '%':
					len += _print_percent();
					break;
				case 'd':
				case 'i':
					len += _print_int(args);
					break;
				case 'u':
					len += _print_unsigned_int(args);
					break;
				case 'o':
					len += _print_octal(args);
					break;
				case 'x':
				case 'X':
					len += _print_hex(args);
					break;
				case 'b':
					len += _print_binary(args);
					break;
				case 'p':
					len += _print_address(args);
					break;
				case 'r':
					len += _print_reverse(args);
					break;
				case 'R':
					len += _print_rot13(args);
					break;
				case 'S':
					len += _print_non_printable(args);
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					len += 2;
					break;
			}
		}
	}

	va_end(args);
	return (len);
}
