#include "main.h"
#include <stdlib.h>

/**
 * set_bit - is a fun Write a function that sets the value of a
*bit to 1 at a given index.
 * @n: is an argument
 * @index: ..........................
 * Return: ..........................
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
{
		return (-1);
}
	*n |= (1 << index);
	return (1);
}
