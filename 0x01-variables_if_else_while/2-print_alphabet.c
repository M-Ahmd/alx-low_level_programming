#include<stdio.h>
/**
*main - Entry point
*Descrioption: A c programm print alphabet
*Return: Always 0
*/
int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
