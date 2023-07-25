#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that takes another function as pointer
 * @name: pointer to name char (string)
 * @f: function pointer that prints the given name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
