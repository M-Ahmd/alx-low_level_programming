#include "main.h"
/**
*_puts_recursion - is a function
*@s: is an argument
*Return: Always 0
*/
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
	_putchar(*(s + i));
	}
	_putchar('\n');

}
