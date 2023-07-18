#include "main.h"
/**
*_isalpha - is a function make diffirent between alphet and other
*@c:is a argument
*Return: Always 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
