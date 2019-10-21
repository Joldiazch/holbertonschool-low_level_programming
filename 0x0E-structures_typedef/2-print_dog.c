#include "dog.h"
#include <stdio.h>
/**
* print_dog - initialize struct dog whit name age and owner
* @d: pointer of struct
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		printf("(nil)");
	}
}
