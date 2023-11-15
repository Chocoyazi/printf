#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int binary(int num);
int octal(int num);
int print_decimal(int value);
int print_string(char *);

#endif
