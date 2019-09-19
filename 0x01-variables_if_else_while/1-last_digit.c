#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point print
*
* Return: Always 0 (sucess)
**/
int main(void)
{
	int n;
	int dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, dig);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, dig);
	}
	else if (n < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, dig);
	}
	return (0);
}
