#include "dog.h"
/**
* init_dog - initialize struct dog whit name age and owner
* @name: name of dog
* @age: age
* @owner: owner of dog.
* @d: pointer of struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
