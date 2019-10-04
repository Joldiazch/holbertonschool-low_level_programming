#include "holberton.h"

/**
* *cap_string - copies the first n characters of the *src to dest
* @a: destino
* Return: void.
*/
char *cap_string(char *a)
{
	int i = 0;

	while (*(a + i))
	{
		if ((*(a + i) == ' '))
		{
			if ((*(a + i + 1) >= 97) && (*(a + i + 1) <= 122))
			{
				(*(a + (i + 1))) -= 32;
			}
		}
		if ((*(a + i) == ',') || (*(a + i) == ';') || (*(a + i) == '.') || (*(a + i) == '!') || (*(a + i) == '?') || (*(a + i) == '"') || (*(a + i) == '(') || (*(a + i) == ')') || (*(a + i) == '{') || (*(a + i) == '}') || (*(a + i) == 9) || (*(a + i) == 10))
		{
			if ((*(a + i + 1) >= 97) && (*(a + i + 1) <= 122))
			{
				(*(a + (i + 1))) -= 32;
			}
		}
		i++;
	}
	return (a);
}
