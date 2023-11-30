#define VARIADIC_FUNCTIONS
#ifndef VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdargs.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
