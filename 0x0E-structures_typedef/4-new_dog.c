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
	int l1 = 0, l2 = 0, x;
	dog_t *new_dog;

	if (name != NULL && owner != NULL)
	{
		while (*(name + l1))
		{
			l1++;
		}
		while (*(owner + l2))
		{
			l2++;
		}
		new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
		{
			return (NULL);
		}
		(*new_dog).name = malloc(l1 + 1);
		if ((*new_dog).name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		(*new_dog).owner = malloc(l2 + 1);
		if ((*new_dog).owner == NULL)
		{
			free((*new_dog).name);
			free(new_dog);
			return (NULL);
		}
		for (x = 0; x < l1; x++)
			(*new_dog).name[x] = name[x];
		(*new_dog).age = age;
		for (x = 0; x < l2; x++)
			(*new_dog).owner[x] = owner[x];
		return (new_dog);
	}
	return (NULL);
}
