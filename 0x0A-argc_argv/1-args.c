#include <stdio.h>
#include "main.h"
/**
*main - is entry point
*@argc: is an argument
*@argv: is an argument
*Return: Always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
