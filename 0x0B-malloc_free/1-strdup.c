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
	int len = strlen(str);
	char *ptr;
	int i;

	if (str == NULL)
	{
	ptr = NULL;
	}
	ptr = (char *) malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
	{
	ptr[i] = str[i];
	}
	return (ptr);
}
