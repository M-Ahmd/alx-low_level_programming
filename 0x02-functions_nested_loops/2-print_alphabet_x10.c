#include "main.h"
/**
*print_alphabet_x10 - intry point
*Descrioption:A c programm
*Return:Always 0
*/
void print_alphabet_x10(void)
{
char i;
int counter = 0;

while (counter < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
counter++;
}
}
