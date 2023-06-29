#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: Format string
 *
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	int e_j, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (e_j = 0; format && format[e_j] != '\0'; e_j++)
	{
		if (format[e_j] != '%')
		{
			buffer[buff_ind++] = format[e_j];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[e_j], 1); */
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &e_j);
			width = get_width(format, &e_j, list);
			precision = get_precision(format, &e_j, list);
			size = get_size(format, &e_j);
			++e_j;
			printed = handle_print(format, &e_j, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buff_ind: Index at which to add the next character, represents the length
 *
 * Return: void
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
