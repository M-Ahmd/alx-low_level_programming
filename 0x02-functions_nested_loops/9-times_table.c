#include "main.h"

/**
 * times_table - is a void function
 * Description: it is a simple code to display times table
 * Return: Always 0
 */
void times_table(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        int j;
        for (j = 0; j < 10; j++)
        {
            int res = j * i;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (res >= 10)
            {
                _putchar(res / 10 + '0');
                _putchar(res % 10 + '0');
            }
            else
            {
                _putchar(' ');
                _putchar(res + '0');
            }
        }
        _putchar('\n');
    }
}
