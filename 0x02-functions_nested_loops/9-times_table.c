#include "main.h"
/**
*times_table - is a void function
*Description: it is a simple code to display times table
*Return: Always 0
*/
void times_table(void)
{
		int i;

	for (i = 0; i < 10; i++)
	{
	int j;

	for (j = 0; j < 10; j++)
	{
	int res = j * i;

	if (res > 9)
{
	if (i = 0)
{
	_putchar(' ');
}
	_putchar(res / 10 + '0');
	_putchar(res % 10 + '0');
}
else
{
	_putchar(' ');
	_putchar(' ');
	_putchar(res + '0');
}
	if (j != 9)
	{
	_putchar(',');
	}
	}
	_putchar('\n');
	}
}
