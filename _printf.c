#include <stddef.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints various printf functions
 * @format: Format for string
 *
 * Return: Numerical value for characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	va_start(args, format);

	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					length++;
					break;

				case 's':
				{
					char *str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";

					while (*str)
					{
						_putchar(*str);
						str++;
						length++;
					}
					break;
				}

				case 'd':
				case 'i':
					length += convert_integer_to_string(va_arg(args, int));
					break;

				case 'u':
					length += convert_unsigned_to_string(va_arg(args, unsigned int));
					break;

				case 'o':
					length += convert_unsigned_to_octal(va_arg(args, unsigned int));
					break;

				case 'x':
					length += convert_unsigned_to_hexadecimal(va_arg(args, unsigned int), 0);
					break;

				case 'X':
					length += convert_unsigned_to_hexadecimal(va_arg(args, unsigned int), 1);
					break;

				case 'b':
					length += convert_unsigned_to_binary(va_arg(args, unsigned int));
					break;

				case 'S':
					length += print_string(va_arg(args, char *));
					break;

				case 'p':
					length += print_address(va_arg(args, void *));
					break;

				case 'r':
					length += print_reversed(va_arg(args, char *));
					break;

				case 'R':
					length += print_rot13(va_arg(args, char *));
					break;

				default:
					_putchar('%');
					_putchar(*format);
					length += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			length++;
		}

		format++;
	}

	va_end(args);
	return (length);
}
