#include <stdio.h>

int main(void)
{
	int c;
	int a;
	int d;
	for (d = 48; d < 58 ; d++)
	{
		for (c = 48; c < 58; c++)
		{
			for (a = 48; a < 58; a++)
			{
				putchar(d);
				putchar(d);
				putchar(c);
				putchar(a);

				if (c != 56 || a != 57)
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
