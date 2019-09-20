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
		for (a = 48; a < 58; a++)
		{
			putchar(c);
			putchar(a);

			if ((a + c) != 57 * 2)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
