#include "main.h"
/**
*_memcpy - is a function
*@dest: is an argument
*@src: is an argument
*@n: is an argument
*Return: Always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
