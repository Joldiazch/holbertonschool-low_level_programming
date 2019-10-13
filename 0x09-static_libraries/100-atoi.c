#include "holberton.h"
/**
  * _atoi - print integers
  * @s: integer to print
  * Return: (e) the integer
  */
int _atoi(char *s)
{
	    int b, c, signo, f;
	        unsigned int e;
		    b = 0;
		        signo = 1;
			    e = 0;
			        f = 0;
				    while (s[b] != '\0')
					        {
							        c = s[b];
								        if (c == 45)
										        {
												            signo = signo * (-1);
													            }
									        if (c >= 48 && c <= 57)
											        {
													            c = s[b] - 48;
														                if (e == 0)
																	            {
																			                    e = c;
																					                }
																            else
																		                {
																					                e = (e * 10) + c;
																							                ++f;
																									            }
																	            }
										        else if (f > 0)
												        {
														            break;
															            }
											        ++b;
												    }
				        e = e * signo;
					    return (e);
}
