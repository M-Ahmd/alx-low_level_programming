#include "main.h"

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
