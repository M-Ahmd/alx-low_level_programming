#include "main.h"
/**
*print_array - is a funtion
*@a: is an argument
*@n: is an array size
*Return: Always 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", *(a + i));
	if (i != n - 1)
	{
	printf(",");
	printf(" ");
	}
	}
	printf("\n");
}
