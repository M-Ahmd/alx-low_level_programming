#include "main.h"
/**
*times_table - is a void function
*Description: it is a simple code to display times table
*Return: Always 0
*/
void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
	for (int j = 0; j < 10; j++)
	{
	_putchar(j * i + '0');
	if (j != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
}
}
