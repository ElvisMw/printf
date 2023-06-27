#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int convert_integer_to_string(int num);
int convert_unsigned_to_string(unsigned int num);
int convert_unsigned_to_octal(unsigned int num);
int convert_unsigned_to_hexadecimal(unsigned int num, int uppercase);
int convert_unsigned_to_binary(unsigned int num);
int print_string(char *str);
int print_address(void *ptr);
int print_reversed(char *str);
int print_rot13(char *str);

#endif
