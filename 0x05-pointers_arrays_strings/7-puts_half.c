#include "main.h"
/**
*puts_half - is a function
*@str: is a grument
*Return: Always 0
*/
void puts_half(char *str)
{

	/*We want to get string length*/
	int len = 0;
	int i;

	while (*(str + len) != '\0')
	{
	len++;
	}
	if (len / 2 == 0)
	{
	for (i = len / 2; i < len; i++)
	{
	_putchar(*(str + i));
	}
	}
	else
	{
	for (i = (len - 1) / 2; i < len; i++)
	{
	_putchar(*(str + i));
	}

	}
	_putchar ('\n');


}
