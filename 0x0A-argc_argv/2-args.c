#include <stdio.h>
#include "main.h"
/**
*main- is entry point
*@argc: is an argument
*@argv: is an argument
*Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
