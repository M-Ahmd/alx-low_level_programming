#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_calloc - is a fun
*@nmemb: is an argument
*@size: is an argument
*Return: Always 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
	return (NULL);
	}
	if (nmemb == 0)
	{
	return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
	arr[i] = 0;
	}
	return (arr);
}
