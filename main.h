#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *str);
int print_decimal(int value);
long int power(int base, int x);
long convertToDecimal(int number, int base);
int print_binary(int number);

#endif