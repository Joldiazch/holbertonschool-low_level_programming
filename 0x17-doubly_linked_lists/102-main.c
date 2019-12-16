#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
char* itoa(int i, char *b){
	char const digit[] = "0123456789";
	char* p = b;
	if(i<0)
	{
		*p++ = '-';
		i *= -1;
	}
	int shifter = i;
	do
	{ //Move to where representation ends
		++p;
		shifter = shifter/10;
	}
	while(shifter);
	*p = '\0';
	do
	{ //Move back, inserting digits as u go
		*--p = digit[i%10];
		i = i/10;
	}
	while(i);
	return b;
}

int main()
{
	long int f_num, s_num, resul, num, num2, num3;
	char *str;

	f_num = 100;
	s_num = 100;
	num = 0;
	num2 = 0;
	num3 = 0;

	while (f_num <= 999)
	{
		while (s_num <= 999)
		{
			resul = f_num * s_num;
			str = itoa(resul, str);
			if (is_palindrome(str) && resul > num)
			{
				num = resul;
				num2 = f_num;
				num3 = s_num;
			}
			s_num++;
		}
		s_num = 100;
		f_num++;
	}
	printf("The largest palindrome made from the product of 3-digit numbers is %lu = %lu x %lu \n", num, num2, num3);
}
