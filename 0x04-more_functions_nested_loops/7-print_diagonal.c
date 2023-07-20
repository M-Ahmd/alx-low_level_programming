#include "main.h"
/**
*print_diagonal - is a function
*@n: is an argument
*Description: A c programm print diagonal
*Return: Always 0
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int number_of_spaces, i;

	for (i = 0; i < n; i++)
	{
	if (i != 0)
	{
	for (number_of_spaces = 0; number_of_spaces < i; number_of_spaces++)
	{
	_putchar(' ');
	}
	}
	_putchar ('\\');
	_putchar('\n');
	}

	}
}
