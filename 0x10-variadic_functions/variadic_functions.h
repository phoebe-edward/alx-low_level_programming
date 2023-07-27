#ifndef VAR_FNC_H
#define VAR_FNC_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct form - structure
 * @c: char element
 * @func: function pointer element
 */
typedef struct form
{
	char c;
	void (*func)(va_list);
} form_t;
void print_all(const char * const format, ...);
void _print_char(va_list list);
void _print_int(va_list list);
void _print_float(va_list list);
void _print_string(va_list list);
#endif
