#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*init_dog - is a function
*@d: is an argument
*@name: is an argument
*@age: is an argument
*@owner: is an argument
*Return: Always 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
