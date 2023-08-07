#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*str_concat - is a fun
*@s1: is the first string
*@s2: is the second string
*Return: Always 0
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len, i, j;
	char *ptr;

	if (s1 == NULL)
	{
	len1 = 0;
	}
	else
	{
	len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
	len2 = 0;
	}
	else
	{
	len2 = strlen(s2);
	}
	len = len1 + len2;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	ptr[i] = s1[i];
	}
	for (i = len1, j = 0; j < len2; i++, j++)
	{
	ptr[i] = s2[j];
	}
	ptr[len] = '\0';
	return (ptr);
}
