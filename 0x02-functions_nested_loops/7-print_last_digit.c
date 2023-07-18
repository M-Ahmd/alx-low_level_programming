#include "main.h"
/**
*print_last_digit- is a function
*@l : is a arguement
*Description: A c programm print the last digital
*Return: Always 0
*/
int print_last_digit(int l)
{
	int ret = l % 10;

	if (ret < 0)
		ret *= -1;
	_putchar(ret + '0');
	return (ret);
}
