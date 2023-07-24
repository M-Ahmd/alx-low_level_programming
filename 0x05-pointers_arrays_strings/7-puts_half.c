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
	int i = 0;
	int haf;

	while (*(str + len) != '\0')
	{
	len++;
	}
	haf = len / 2;
	if (haf == 0)
	{
	for (i = haf + 1; i < len; i++)
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
