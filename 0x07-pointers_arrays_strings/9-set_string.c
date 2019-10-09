#include "holberton.h"
#include <stdio.h>
/**
* set_string - sets the value of a pointer to a char.
* @s: strings a copiar
* @to: destino
* Return: void.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
