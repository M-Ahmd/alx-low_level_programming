#include<stdio.h>
/**
*main - Entry point
*Description: A c programm display a alphabet
*Return: Always 0
*/
int main(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (c = 'a'; 'f' >= c; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
