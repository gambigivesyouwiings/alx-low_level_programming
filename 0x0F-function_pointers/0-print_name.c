#include "function_pointers.h"
/**
* print_name - prints name of function
*@name: text to be entered
*@f: function pointer
*/

void print_name(char *name, void(*f)(char *))
{
	f(name);
}
