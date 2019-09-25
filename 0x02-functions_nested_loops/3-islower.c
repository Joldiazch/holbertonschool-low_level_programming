#include "holberton.h"
/**
* _islower: check if C character is a lower character.
*
* @c: this is a character.
* Return: i an integer numer.
*
*/
int _islower(int c)
{
	int i;

	if ((c >= 97) && (c <= 122))
	{
		i = 1;
		return (i);
	}
	else
	{
		i = 0;
		return (i);
	}
}
