#include "main.h"
/**
*print_triangle - is a function
*@size: is an argument
*Return: Always 0
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar ('\n');
}
else
{
int i, j, z;
int hashTag;
int number_of_spaces;
hashTag = 1;
number_of_spaces = size - 1;
for (i = 0; i < size; i++)
{

for (j = 0; j < number_of_spaces; j++)
{
	_putchar(' ');

}
for (z = 0; z < hashTag; z++)
{
	_putchar('#');
}
	hashTag++;
	_putchar('\n');
	number_of_spaces--;
}
}
}
