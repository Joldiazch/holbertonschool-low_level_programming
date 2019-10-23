#include <stdlib.h>
/**
* print_name - print a name
* @name: pointer to name.
* @f: pointer to function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
