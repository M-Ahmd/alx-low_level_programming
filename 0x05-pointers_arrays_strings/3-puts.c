#include "main.h"
/**
*_puts - is a function
*@str: is an argument
*Return: Always 0
*/
void _puts(char *str)
{
int i = 0;

	while (*(str + i) != '\0')
	{
	_putchar(*(str + i));
	i++;
	}
	_putchar ('\n');
}
