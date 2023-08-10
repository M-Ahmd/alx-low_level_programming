#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - is a fun
*@s1: is an argument
*@s2: is an argument
*@n: is an argument
*Return: is always 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1, n2, i, j;
	char *p;

	if (s1 == NULL)
	n1 = 0;
	else
	n1 = strlen(s1);

	if (s2 == NULL)
	n2 = 0;
	else
	n2 = n;


	p = malloc((n1 + 1) + n);
	if (p == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < n1; i++)
	{
	p[i] = s1[i];
	}
	for (j = n1, i = 0; i < n2; j++, i++)
	{
	p[j] = s2[i];
	}
	return (p);
}
