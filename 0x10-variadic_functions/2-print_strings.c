#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - ....................
*@separator:.........................
*@n:..................................
*Return:..............................
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
	if (ptr != NULL)
	vprintf("%s", ptr);
	else
	printf("%s", "(nil)");
	while (separator[j] != '\0' && separator != NULL && i != n - 1)
	{
	putchar(separator[j]);
	j++;
	}
	j = 0;
	}
	putchar('\n');
}
