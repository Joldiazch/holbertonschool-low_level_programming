#include "holberton.h"
/**
* _isdigit - check if C character is digit.
*
* @c: this is a character in ascci code.
* Return: 1 if character is a upper or 0 in other case.
*
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
