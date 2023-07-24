#include "main.h"
/**
*swap_int - is a function
*@a: is an argument
*@b: is an argument
*Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
