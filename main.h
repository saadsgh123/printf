#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "stdarg.h"

int print_int(int n);
int print_string(va_list args);
int _printf(const char *format, ...);
int print_string(va_list args);
int _putchar(char c);
int print_decimal(int n);
int decimalTobinary(unsigned int d);

#endif
