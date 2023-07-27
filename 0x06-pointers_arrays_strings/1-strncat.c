#include "main.h"
/**
*_strncat - is a function
*@dest: is an argument
*@src: is an argument
*@n: is an argument
*Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	/*Let is get length of each array*/
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	int counter = 0;

	while (*(dest + i) != '\0')
	{
	len1++;
	i++;
	}
	while (*(src + j) != '\0')
	{
	len2++;
	j++;
	}
	i = 0;
	j = 0;
	/*PUM we now know each array length let is make them togather*/
	for (i = 0, j = len1; i < len2; i++, j++)
	{
	if (counter < n)
	{
	dest[j] = src[i];
	counter++;
	}
	else
	{
	break;
	}
	}

	/*now we did it*/
	return (dest);
}
