#include "main.h"
/**
**_memset - is a function
*@s: is an argument
*@b: is an argument
*@n: is an argument
*Return: Always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
