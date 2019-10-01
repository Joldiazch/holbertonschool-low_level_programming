#include "holberton.h"

/**
* rev_string - invierte el ordel del estring al cual apunta *s
* @s: pointer of string
* Return: Void.
*
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int c;

	while (*(s + i) != 0)
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		c = (i / 2);
	}
	else
	{
		c = (i / 2) + 1;
	}

	i--;

	while (i >= c)
	{
		char b = *(s + j);

		*(s + j) = *(s + i);
		*(s + i) = b;
		j++;
		i--;
	}
}
