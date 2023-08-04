#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*main - is entry point
*@argc: is argument
*@argv: is argument
*Return: Always 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
