#ifndef FUNC_PTRS
#define FUNC_PTRS
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
#endif
