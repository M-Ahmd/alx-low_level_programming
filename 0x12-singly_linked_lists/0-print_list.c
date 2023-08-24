#include<stdio.h>
#include<string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
        long unsigned int n = 1;
	if(h->str == NULL)
	{
	printf("[%d] %s\n", 0, "(nil)");
	}
	else
        printf("[%d] %s\n", h->len, strdup(h->str));


	if (h->next != NULL)
        {
            n++;
            print_list(h->next);
        }

    return n;
}
