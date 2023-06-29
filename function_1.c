#include "main.h"
<<<<<<< HEAD
=======

/************************* PRINT UNSIGNED NUMBER *************************/

>>>>>>> c23f5c7d47d9aa3298a7ac725587237ab6c77ca1
/**
 * print_unsigned - Prints an unsigned number
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int e_j = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[e_j--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[e_j--] = (num % 10) + '0';
		num /= 10;
	}

	e_j++;

	return (write_unsgnd(0, e_j, buffer, flags, width, precision, size));
}

<<<<<<< HEAD
=======
/************************* PRINT UNSIGNED NUMBER IN OCTAL *************************/

>>>>>>> c23f5c7d47d9aa3298a7ac725587237ab6c77ca1
/**
 * print_octal - Prints an unsigned number in octal notation
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{

	int e_j = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[e_j--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[e_j--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & F_HASH && init_num != 0)
		buffer[e_j--] = '0';

	e_j++;

	return (write_unsgnd(0, e_j, buffer, flags, width, precision, size));
}

<<<<<<< HEAD
=======
/************************* PRINT UNSIGNED NUMBER IN HEXADECIMAL *************************/

>>>>>>> c23f5c7d47d9aa3298a7ac725587237ab6c77ca1
/**
 * print_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}

<<<<<<< HEAD
=======
/************************* PRINT UNSIGNED NUMBER IN UPPER HEXADECIMAL *************************/

>>>>>>> c23f5c7d47d9aa3298a7ac725587237ab6c77ca1
/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}

<<<<<<< HEAD
=======
/************************* PRINT HEXA

DECIMAL NUMBER IN LOWER OR UPPER *************************/

>>>>>>> c23f5c7d47d9aa3298a7ac725587237ab6c77ca1
/**
 * print_hexa - Prints a hexadecimal number in lower or upper case
 * @types: List of arguments
 * @map_to: Array of values to map the number to
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @flag_ch: Calculates active flags
 * @width: Get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)
{
	int e_j = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[e_j--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[e_j--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[e_j--] = flag_ch;
		buffer[e_j--] = '0';
	}

	e_j++;

	return (write_unsgnd(0, e_j, buffer, flags, width, precision, size));
}

