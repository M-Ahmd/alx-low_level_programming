#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main- Entry point
*Descpription: A c programm do something with numbers
*Return: Always 0
*/
int main(void)
{
	int n;
	int theLastNumOfInt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	theLastNumOfInt = n % 10;
	if (theLastNumOfInt > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, theLastNumOfInt);
}
	else if (theLastNumOfInt == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, theLastNumOfInt);
}
	else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n"
	, n
	, theLastNumOfInt);
}
	return (0);
}
