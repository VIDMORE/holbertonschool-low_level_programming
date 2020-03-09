#include <stdio.h>
#include "dog.h"

/**
* init_dog - function that initialize a variable of type struct dog
* @d: struc dog
* @name: name of the dog;
* @age: age of the dog
* @owner: owner of the dog
**/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
