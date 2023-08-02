#include "main.h"
/**
*_pow_recursion - is a function
*@x: is an argument
*@y: is an argument
*Return: Always 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
