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
	int b;

	for (c = 48; c < 58; c++)
	{
		for (a = c + 1; a < 58; a++)
		{
			for (b = a + 1; b < 58; b++)
			{
				putchar(c);
				putchar(a);
				putchar(b);

				if (c != 55 || a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
