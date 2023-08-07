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
	if (size == 0)
	{
	return (NULL);
	}
	else
	{
	char *ptr = (char *) malloc(sizeof(int) * 1);

	*ptr = c;
	return (ptr);
	}
	free(ptr);

}
