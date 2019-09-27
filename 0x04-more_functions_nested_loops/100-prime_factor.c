#include "holberton.h"
#include <stdio.h>
/**
* main - print mayor factor primo de un numero..
*
* Return: 0.
*
*/
int main(void)
{
	int long number = 612852475143;
	int long m = 1;
	int long fp = 2;

	while (m != number)
	{
		if ((number % fp) == 0)
		{
			m = m * fp;
			number = number / fp;
		}
		else
		{
			fp++;
		}
		if (number == 1)
		{
			printf("%li", fp);
			printf("\n");
			return (0);
		}
	}
	return (0);

}
