#include "main.h"
/**
*_strlen - is a function
*@s: is a argument
*Return: Always 0
*/
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
{
len++;
}
return (len);
}
