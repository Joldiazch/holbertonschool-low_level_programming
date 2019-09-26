#include "holberton.h"
/**
* _isupper - check if C character is uppercase.
*
* @c: this is a character for evaluatin.
* Return: 1 if character is a upper or 0 in other case.
*
*/
int _isupper(int c);
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
