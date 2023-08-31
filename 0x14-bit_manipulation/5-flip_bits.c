#include "main.h"

/**
 * flip_bits - is a fun number of bits you would need to nmap
 * @n: is an argument
 * @m: ............
 * Return: ........
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, nmap = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			nmap += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nmap);
}
