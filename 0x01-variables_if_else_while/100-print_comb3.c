#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point print
*
* Return: Always 0 (sucess)
**/
int main(void)
{
	int c;
	int a;

	for (c = 48; c < 58; c++)
	{
		for (a = c + 1; a < 58; a++)
		{
			putchar(c);
			putchar(a);

			if (c != 56 || a != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
