#include "function_pointers.h"
/**
 * print_name - name of the function
 * @name: name to print
 * @f: function to call
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);

}
