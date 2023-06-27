
/**
 * convert_unsigned_to_binary - Converts an unsigned integer to a binary string and prints it
 * @num: The unsigned integer to convert
 *
 * Return: Number of characters printed
 */
int convert_unsigned_to_binary(unsigned int num)
{
        int length = 0;
        char binary[100];
        int i = 0;

        if (num == 0)
        {
                _putchar('0');
                return 1;
        }

        while (num != 0)
        {
                binary[i] = num % 2 + '0';
                num = num / 2;
                i++;
        }

        for (i = i - 1; i >= 0; i--)
        {
                _putchar(binary[i]);
                length++;
        }

        return length;
}
