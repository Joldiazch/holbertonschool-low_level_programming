#include "holberton.h"

/**
* _islower - check lower character
*
*
* Return: i an integer numer
*
*/
int _islower(int c);
{
	int i;

	if ((c >= 97) && (c <= 122))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return i
}
