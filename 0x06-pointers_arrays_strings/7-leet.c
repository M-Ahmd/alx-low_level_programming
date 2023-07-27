#include "main.h"
/**
*leet - is a function
*@s: is an argument
*Return: Always 0
*/
char *leet(char *s)
{
	int i, j;
	char arr[10][10] = {{'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'}
	,  {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'}};

	for (i = 0; *(s + i) != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (arr[0][j] == *(s + i))
	*(s + i) = arr[1][j];
	}
	}
	return (s);
}
