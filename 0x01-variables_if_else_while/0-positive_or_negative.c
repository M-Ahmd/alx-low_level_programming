#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Description: A c programm check numbers
*Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
{
	printf("%d is positive");
}
	else if (n < 0)
{
	printf("%d negative");
}
	else
{
	printf("%d is zero")
}
	return (0);
}
