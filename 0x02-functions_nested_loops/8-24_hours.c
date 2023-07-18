#include "main.h"
/**
*jack_bauer - is a great function
*Desctiption: A c programm
*Return: Always 0
*/
void jack_bauer(void)
{
int sec = 0;
int min = 0;
while (1 > 0)
{
if (sec == 60)
{
min++;
sec = 0;
}
else
{
printf("%02d:%02d\n", min, sec);
sec++;
}
if (min == 23 && sec == 59)
{
break;
}
}
}
