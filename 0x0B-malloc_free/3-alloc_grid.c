#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - is a fun
*@width: is an argument
*@height: is an argument
*Return: Always 0
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	arr[i] = malloc(sizeof(int) * width);
	if (arr[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(arr[j]);
	}
	free(arr);
	}
	for (j = 0; j < width; j++)
	{
	arr[i][j] = 0;
	}
	}
	return (arr);
}
