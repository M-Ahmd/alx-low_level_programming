#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strdup - is a fun
*@str: is an argument
*Return: Always 0
*/
char *_strdup(char *str)
{
	int len;
	char *ptr;
	int i;

	if (str == NULL)
	{
	return (NULL);
	}
	len = strlen(str);
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	{
	ptr[i] = str[i];
	}
	ptr[len] = '\0';
	return (ptr);
}
