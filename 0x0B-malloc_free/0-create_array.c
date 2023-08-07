#include "main.h"
#include <stdlib.h>
/**
*create_array - is a fun
*@size: is a size of arr
*@c: is an argument
*Return: Always 0
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	ptr = (char *) malloc(sizeof(char) * size);
	}
	else
	{
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	*(ptr + i) = c;
	}
	}
	return (ptr);
}
