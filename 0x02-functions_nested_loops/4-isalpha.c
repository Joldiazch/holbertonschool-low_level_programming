#include "holberton.h"
/**
* _isalpha - check if C character is a lowercase or uppcase.
*
* @c: this is a character for evaluatin.
* Return: 1 if character is a lowercase or uppcase, 0 in other case.
*
*/
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
