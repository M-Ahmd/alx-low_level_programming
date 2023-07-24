#include "main.h"
/**
*rev_string - is a function
*@s: is an argument
*Return: Always 0
*/
void rev_string(char *s)
{
	/*We want to get string length*/
	int len = 0;
	int i;
	int index = 0;

	while (*(s + len) != '\0')
	{
	len++;
	}
	/*let's revese it*/
	char *arr;
	for (i = len - 1; i >= 0; i--)
	{
	*(arr + index) = *(s + i);
	index++;
	}
	for (i = 0; i < len; i++)
	{
	s[i] = arr[i];
	}
}
