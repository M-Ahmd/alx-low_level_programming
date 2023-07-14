#include <stdio.h>
/**
*main - Entry point
*Description:A c programm do something
*Return: Always 0
*/
int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
{
	if (i != 4 && i != 16)
{
	putchar(ch[i]);
}
}
	putchar('\n');
	return (0);
}
