#include "function_pointers.h"
#include <stddef.h>
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
