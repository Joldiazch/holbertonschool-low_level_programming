#ifndef DOG_H
#define DOG_H
/**
* struct dog - struct for atributes of dog
* @name: name of dog
* @age: age
* @owner: owner of dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
