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
	dog_t *new_dog;

	while (*(name + l1))
	{
		l1++;
	}
	while (*(owner + l2))
	{
		l2++;
	}
	new_dog = malloc(sizeof(char)*l1 + sizeof(char)*l2 + sizeof(float));
	(*new_dog).name = malloc(sizeof(char)*l1);
	if ((*new_dog).name == NULL)
	{
		return (NULL);
	}
	(*new_dog).owner = malloc(sizeof(char)*l2);
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		return (NULL);
	}
	(*new_dog).name = name;
	(*new_dog).age = age;
	(*new_dog).owner = owner;
	return (new_dog);
}
