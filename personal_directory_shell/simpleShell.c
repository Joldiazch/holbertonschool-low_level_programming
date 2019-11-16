#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	char *buffer;
    size_t bufsize = 1024;
	pid_t pid;
    size_t i;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

	while (1)
	{
		printf("#CisFun :) >$: ");
		getline(&buffer, &bufsize, stdin);
		pid = fork();
        if (pid < 0)
        { /* error occurred */ 
            fprintf(stderr, "Fork Failed"); 
            return 1;
        }
        else if (pid == 0)
        { /* child process */
            execve(argv[0], argv, NULL);
        }
        else
        { /* parent process */
            /* parent will wait for the child to complete */
            wait(NULL);
            printf("Child[%i] Complete\n", i + 1);
            printf("\n");
        }
	}
	return (0);	
}