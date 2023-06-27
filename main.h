#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *s);
char *_itoa(int value);
char *_utoa(unsigned int value, int base);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
char *_strrev(char *str);
char *_rot13(char *str);
int _print_str(va_list args);
int _print_char(va_list args);
int _print_int(va_list args);
int _print_unsigned_int(va_list args);
int _print_octal(va_list args);
int _print_hex(va_list args);
int _print_binary(va_list args);
int _print_address(va_list args);
int _print_reverse(va_list args);
int _print_rot13(va_list args);
int _print_percent(void);
int _print_non_printable(va_list args);

#endif /* MAIN_H */
