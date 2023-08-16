#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - is a .......
*@name: is an argument do ....
*@f: is a function pointers
*Return: Always 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
