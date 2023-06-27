#include "main.h"
/**
 * convert_unsigned_to_octal - Converts unsigned_integer to octal string 
 * @num: Unsigned_integer to-be converted
 *
 * Return: Number of characters printed
 */
int convert_unsigned_to_octal(unsigned int num)
{
        int length = 0;
        char octal[100];
        int e_j = 0;

        if (num == 0)
        {
                _putchar('0');
                return 1;
        }

        while (num != 0)
        {
                octal[e_j] = num % 8 + '0';
                num = num / 8;
                i++;
        }

        for (e_j = e_j - 1; e_j >= 0; e_j--)
        {
                _putchar(octal[e_j]);
                length++;
        }

        return length;
}
