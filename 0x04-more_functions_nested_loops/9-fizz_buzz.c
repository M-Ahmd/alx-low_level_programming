#include <stdio.h>
/**
*main - intry point
*Return: Always 0
*/
int main(void)
{
	int i = 1;

	while (i != 101)
	{
	if (i % 3 == 0)
	{
	printf(" Fizz");
	}
	else if (i % 5 == 0)
	{
	printf(" Buzz");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("Fizz Buzz");
	}

	else if (i == 1)
	{
	printf("%d", i);
	}
	else
	{
	printf(" %d", i);
	}
	i++;
	}
	putchar ('\n');
	return (0);
}
