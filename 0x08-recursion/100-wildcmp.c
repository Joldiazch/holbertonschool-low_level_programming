#include "holberton.h"

/**
  * hayaste - verifica si los caracteres son iguales
  * @p: pointer to string
  * Return: 1 si son iguales 2 in other case..
  */
int hayaste(char *p)
{
	if (*p != '*')
	{
		p++;
		return (hayaste(p));
	}
	if (*p == '\0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
  * conas - verifica si los caracteres son iguales
  * @s1: pointer to string
  * @s2: iterador
  * Return: 1 si son iguales 2 in other case..
  */
int conas(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (1);
		}
		s1++;
		s2++;
		return (conas(s1, s2));
	}
	else if (*s2 == '*')
	{
		s2++;
		return (conas(s1, s2));
	}
	else if (*s1 == '\0')
	{
		return (0);
	}
	else
	{
		s1++;
		return (conas(s1, s2));
	}
}
/**
  * wildcmp - verifica si los caracteres son iguales
  * @s1: pointer to string
  * @s2: iterador
  * Return: 1 si son iguales 2 in other case..
  */
int wildcmp(char *s1, char *s2)
{
	if (hayaste(s2))
	{
		return (conas(s1, s2));
	}
	else if (*s1 == *s2 && (*s1 || *s2))
	{
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	}
	else if (*s1 && *s2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
