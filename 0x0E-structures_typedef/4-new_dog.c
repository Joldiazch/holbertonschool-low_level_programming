#include "dog.h"
#include <stdlib.h>
/**
* *new_dog - create new dog
* @name: name of dog
* @age: age
* @owner: owner of dog.
* Return: new_dog estructur
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int l1 = 0, l2 = 0;
	char *nombre, *dueno;

	nombre = name;
	dueno = owner;
	dog_t *new_dog;

	while (*(name + l1))
	{
		l1++;
	}
	while (*(owner + l2))
	{
		l2++;
	}
	new_dog = malloc(sizeof(float) + (l1 + l2) * sizeof(char));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	(*new_dog).name = nombre;
	(*new_dog).age = age;
	(*new_dog).owner = dueno;
	return (new_dog);
}
