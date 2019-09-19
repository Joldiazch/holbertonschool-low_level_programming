#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point print
*
* Return: Always 0 (sucess)
**/
int main(void)
{
	char c[] = "abcdefghijklmnopqrctvwxyz";

	int i = 0;

	while (c[i])
	{
		putchar(c[i]);
		i++;
	}
	i = 0;
	while (c[i])
	{
		putchar(toupper(c[i]));
		i++;
	}
	putchar('\n');
	return (0);

}
