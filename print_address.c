#include "main.h"

/**
 * print_address - Prints pointer's memory address
 * @ptr: Pointer to print the address of
 * Return: Numerical value for characters printed
 */
int print_address(void *ptr)
{
	unsigned long int address = (unsigned long int)ptr;
	int length = 0;

	_putchar('0');
	_putchar('x');
	length += 2;

	if (address == 0)
	{
		_putchar('0');
		length++;
	}
	else
	{
		length += convert_unsigned_to_hexadecimal(address, 0);
	}

	return (length);
}
