#include "variadic_functions.h"
/**
 * _print_char - prints char
 * @list: list
 */
void _print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * _print_int - print int
 * @list: list
 */
void _print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * _print_float - print float
 * @list: list
 */
void _print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * _print_string - print string
 * @list: list
 */
void _print_string(va_list list)
{
	char *s = va_arg(list, char*);

	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - prints all
 * @format: format of variables to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	form_t arr[] = {
		{'c', _print_char},
		{'i', _print_int},
		{'f', _print_float},
		{'s', _print_string}};

	va_start(args, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == arr[j].c)
			{
				if (i != 0)
					printf(", ");
				arr[j].func(args);
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
