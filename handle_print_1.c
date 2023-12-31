#include "main.h"

/**
 * handle_print - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @ind: Index of the current character in the formatted string.
 * @list: List of arguments to be printed.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Width specifier.
 * @precision: Represents precision specification.
 * @size: Represents size specifier.
 * Return: Numerical value for  characters printed or -1 on error.
 */
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int e_j, unknown_len = 0, printed_chars = -1;

	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};

	for (e_j = 0; fmt_types[e_j].fmt != '\0'; e_j++)
	{
		if (fmt[*ind] == fmt_types[e_j].fmt)
			return (fmt_types[e_j].fn(list, buffer, flags, width, precision, size));
	}

	if (fmt_types[e_j].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);

		unknown_len += write(1, "%%", 1);

		if (fmt[*ind - 1] == ' ')
			unknown_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
				--(*ind);

			if (fmt[*ind] == ' ')
				--(*ind);

			return (1);
		}

		unknown_len += write(1, &fmt[*ind], 1);
		return (unknown_len);
	}

	return (printed_chars);
}
