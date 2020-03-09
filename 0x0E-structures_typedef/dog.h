#ifndef DOG
#define DOG

/**
* struct dog - a simple guau guau
* @name: the dogo name
* @age: my age
* @owner: my owner
**/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
