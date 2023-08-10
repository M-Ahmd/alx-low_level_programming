#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - is a fun
*@b: is an argument
*Return: Always 0
*/
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	exit(98);
	return (p);
}
