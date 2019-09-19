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
		if (c != 'q' && c != 'e' )
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
