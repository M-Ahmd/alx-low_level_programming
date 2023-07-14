#include<stdio.h>
/**
*main- Entry point
*Descpription: A c programm do something with numbers
*Return: Always 0
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
char c = i + '0';
putchar(c);
}
putchar('\n');
return (0);
}
