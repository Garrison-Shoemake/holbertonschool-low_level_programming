#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - name of the function
 * @name: name to print
 * @f: function to call
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);

}
