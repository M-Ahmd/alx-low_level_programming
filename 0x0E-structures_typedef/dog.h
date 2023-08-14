#ifndef dog_H
#define dog_H
#include <stdio.h>
/**
*struct dog - is a struct
*@name: is a name of dog
*@owner: is a owner of the dog
*@age: is a age of dog
*Return: Always 0
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
