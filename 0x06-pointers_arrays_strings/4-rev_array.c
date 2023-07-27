#include "main.h"
/**
*reverse_array - is a function
*@a: is an given array
*@n: number of items
*Return: Always 0
*/
void reverse_array(int *a, int n)
{
	int i;
	int size = n - 1;

	for (i = 0; i < n / 2; i++)
	{
	int temp = a[i];

	a[i] = a[size];
	a[size--] = temp;
	}

}
