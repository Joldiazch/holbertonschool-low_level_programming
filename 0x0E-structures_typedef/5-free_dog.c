#include "dog.h"
#include <stdlib.h>
/**
* free_dog - create new dog
* @d: pointer.
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free((*d).name);
	free((*d).owner);
	free(d);
}
