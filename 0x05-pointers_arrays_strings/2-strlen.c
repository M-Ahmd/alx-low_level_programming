#include "main.h"

int _strlen(char *s)
{
int len=0;
while (*(s + len) != '\0')
{
len++;
}
return (len);
}
