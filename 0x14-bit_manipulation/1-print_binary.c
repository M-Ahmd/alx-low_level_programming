#include "main.h"
/**
*print_binary - ........................
*@n:.....................................
*Return:.................................
*/
void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int curr_char;

	for (i = 63; i >= 0; i--)
	{
		curr_char = n >> i;

		if (curr_char & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
