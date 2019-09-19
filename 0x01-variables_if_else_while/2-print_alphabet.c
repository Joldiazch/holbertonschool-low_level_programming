#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point print
*
* Return: Always 0 (sucess)
**/
int main(void)
{
	char c;

	c = 'a';


	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
