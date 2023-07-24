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
	int half = 0;
	int n_half = 0;

	while (*(str + len) != '\0')
	{
	len++;
	}
	half = (len / 2) + 1;
	n_half = ((len - 1) / 2) + 1;
	if (len / 2 == 0)
	{
	for (i = half; i < len; i++)
	{
	_putchar(*(str + i));
	}
	}
	else
	{
	for (i = n_half; i < len; i++)
	{
	_putchar(*(str + i));
	}

	}
	_putchar ('\n');


}
