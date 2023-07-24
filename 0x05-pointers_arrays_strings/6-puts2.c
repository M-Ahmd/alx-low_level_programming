#include "main.h"
/**
*puts2 - is a function
*@str: is an argument
*Return: Always 0
*/
void puts2(char *str)

{

	/*We want to get string length*/
	int len = 0;
	int i;

	while (*(str + len) != '\0')
	{
	len++;
	}
	for (i = 0; i < len; i += 2)
	{
	_putchar (*(str + i));
	}
	_putchar ('\n');
}
