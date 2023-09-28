#include "main.h"

/**
 * get_endianness - .........................
 * Return: ..................................
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *current = (char *) &j;

	return (*current);
}
