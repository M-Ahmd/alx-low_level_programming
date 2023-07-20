#include "main.h"
/**
*more_numbers - is a function
*Description: A c programm prints int
*Return: Always 0
*/
void more_numbers(void)
{
	int i, j, num;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
	if (i >= 10)
	{
	_putchar(i / 10 + '0');
	}
	_putchar(i % 10 + '0');	
	}
	}
	_putchar('\n');
	}
}
