#include "main.h"
#include <stdio.h>
/**
*print_to_98 - is a function
*@n: is a argument
*Return : Always 0
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
	if (i > 10)
	{
	printf("%d", i);
	}
	else
	{
	printf("%d", i / 10);
	printf("%d",i % 10);

	}
	if (i != 98)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
}
