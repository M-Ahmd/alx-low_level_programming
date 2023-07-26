#include "main.h"
/**
*_strcat - is a function
*@dest: is an argument
*@src: is an argument
*Return: Always 0
*/
char *_strcat(char *dest, char *src)
{
	/*we need to know length of each array*/
	int ii = 0;
	int jj = 0;
	int len1 = 0;
	int len2 = 0;
	int i, j;

	while (*(dest + ii) != '\0')
	{
	len1++;
	ii++;
	}
	while (*(src + jj) != '\0')
	{
	len2++;
	jj++;
	}
	for (i = 0, j = len1; i < len2; i++, j++)
{
	dest[j] = src[i];
}
	return (dest);
}
