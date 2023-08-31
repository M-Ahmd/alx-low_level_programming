#include "main.h"
#include <stdlib.h>
/**
*binary_to_uint - ...........................
*@b:.........................................
*Return:.....................................
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int pow = 1;
	unsigned int len = 0, sum = 0;

	if (b == NULL)
	return (0);


	while (b[len] != '\0')
	{
	if (b[len] != '0' && b[len] != '1')
	return (0);
	len++;
	}


	for (i = len - 1; i >= 0; i--)
	{
	if (b[i] == '1')
	sum += pow;
	pow *= 2;
	}

	return (sum);
}
