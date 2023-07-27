#include "main.h"
/**
*_strcmp - is a function
*@s1: is an argument
*@s2: is an argument
*Return: Always 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int f1, f2;

	if (*s1 == *s2)
	{
	return (0);
	}
	else
	{
while (1)
{
f1 = s1[i];
f2 = s2[i];
if (f1 == '\0' || f2 == '\0')
{
break;
	}
if (f1 != f2)
{
break;
}
i++;
}
}
if (f1 < f2)
return (-15);
else if (f1 > f2)
return (15);
else
return (0);
}
