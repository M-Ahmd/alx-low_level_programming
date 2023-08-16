#include "function_pointers.h"
/**
*int_index - is ..........
*@array:....................
*@size:.....................
*@cmp:.......................
*Return:Always 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = 0;

	if (array == NULL || cmp == NULL)
	{
	return (-1);
	}
	if (size <= 0)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
	index = i;
	break;
	}
	}

	return (index);
}
