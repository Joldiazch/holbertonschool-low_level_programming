#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - stat example
 *
 * Return: Always 0.
 */
/* #define PATH "/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin" */
int main(int ac, char **av)
{
    unsigned int i = 0;
    struct stat st;
	char *token = NULL;
	char *newpath = NULL;
	/*char PATH[60]= "/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin";
	char *del = ":";*/

    if (ac < 2)
    {
        printf("Usage: %s path_to_file ...\n", av[0]);
        return (1);
    }
    i = 1;
	token = "/bin/";/*strtok(PATH, del);*/
	newpath = malloc(sizeof(char)*1024);
	if (!newpath)
		return (-1);
	
	strcpy(newpath, token);
	while (av[i])
	{
		while (token != NULL)
		{
			strcat(newpath, av[i]);
        		if (stat(newpath, &st) == 0)
        		{
            			printf("%s\n",newpath);
				break;
        		}
			token = strtok(NULL, ":");
    		}
		i++;
	}
    return (0);
}
