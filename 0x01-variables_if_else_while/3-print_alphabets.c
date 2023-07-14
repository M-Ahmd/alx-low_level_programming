#include<stdio.h>
/**
*main - Entry point
*Description: A c programm display a alphabet
*Return: Always 0
*/
int main(void)
{
	char ch[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
	putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
