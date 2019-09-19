#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point print
*
* Return: Always 0 (sucess)
**/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	c = 'a';
	while (c <= 'z')
	{
		putchar(toupper(c));
		c = c + 1;
	}
	putchar('\n');
	return (0);

}
