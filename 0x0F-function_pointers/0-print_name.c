#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - This function prints a name.
* @name: Input parameter pointer.
* @f: Pointer to function.
* Return: Void.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
