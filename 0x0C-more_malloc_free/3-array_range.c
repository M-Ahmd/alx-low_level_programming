#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_range - is an array
*@min: is an argument
*@max: is an argument
*Return: Always 0
*/
int *array_range(int min, int max)
{
	int i, size, *arr, j;

	if (min > max)
	{
	return (NULL);
	}
	size = (max - min) + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0, j = min; i < size; i++, j++)
	{
	arr[i] = j;
	}
	return (arr);
}
