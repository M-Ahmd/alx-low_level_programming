#include "main.h"
/**
*print_rev - is a function
*@s: is an argument
*Return: Always 0
*/
void print_rev(char *s)
{
	/*We want to get string length*/
	int len = 0;
	int i;

	while (*(s + len) != '\0')
	{
	len++;
	}
	/*let's revese it*/
	for (i = len - 1; i >= 0; i--)
	{
	_putchar (*(s + i));
	}
	_putchar ('\n');

}
