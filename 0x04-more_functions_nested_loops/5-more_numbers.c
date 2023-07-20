#include "main.h"
/**
*more_numbers - is a function
*Description: A c programm prints int
*Return: Always 0
*/
void more_numbers(void)
{
	int i, j;

	for (j = 1; j < 11; j++)
	{
	for (i = 0; i < 15; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
	}
	_putchar('\n');
}
