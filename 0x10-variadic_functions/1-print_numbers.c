#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers - .........
*@separator: .............
*@n:......................
*Return:.................
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
	vprintf("%d", ptr);
	if (i != n - 1 && separator != NULL)
{
	while (separator[j] != '\0')
	{
	putchar(separator[j]);
	j++;
	}
}
	j = 0;
	}
	putchar('\n');
	va_end(ptr);
}
