#include "main.h"
/**
*_islower - function
*Description: A c traning programm for a header file
*Return: Always 0
*@c: the character to check
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
