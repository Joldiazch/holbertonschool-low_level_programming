#include "holberton.h"
/**
* _islower - check if C character is a lower.
*
* @c: this is a character for evaluatin.
* Return: 1 if character is a lower or 0 in other case.
*
*/
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
