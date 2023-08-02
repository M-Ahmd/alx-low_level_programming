#include "main.h"
/**
*_puts_recursion - is a function
*@s: is an argument
*Return: Always 0
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
	_putchar(*(s + i));
	_puts_recursion(*(s + i));
	}
	else
	{
	_putchar('\n');
	}
}
