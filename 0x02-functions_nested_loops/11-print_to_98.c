#include "main.h"
/**
*print_to_98 - is a function
*@n: is a Argument
*Description: A c programm print to 98
*Return:Always 0
*/
void print_to_98(int n)
{
int i = n;

for (i <= 98; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
}
