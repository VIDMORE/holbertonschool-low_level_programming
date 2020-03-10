#ifndef DOG
#define DOG
#include <stdio.h>

/**
* struct dog - a simple guau guau
* @name: the dogo name
* @age: my age
* @owner: my owner
**/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
