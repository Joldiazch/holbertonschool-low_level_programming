#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1024
/* #define DELIM " \t\r\n\a" */
char **split_line(char *line, char *DEL)
{
  int bufsize = BUFSIZE, position = 0;
  char **tokens = malloc(bufsize * sizeof(char*));
  char *token;

  if (!tokens) {
    fprintf(stderr, "lsh: allocation error\n");
    exit(1);
  }

  token = strtok(line, DEL);
  while (token != NULL) {
    tokens[position] = token;
    position++;

    if (position >= bufsize) {
      bufsize += BUFSIZE;
      tokens = realloc(tokens, bufsize * sizeof(char*));
      if (!tokens) {
        fprintf(stderr, "lsh: allocation error\n");
        exit(1);
      }
    }

    token = strtok(NULL,DEL);
  }
  tokens[position] = NULL;
  return tokens;
}

int main()
{
	char *buffer;
    char **argv;
    /* char *argv2[] = {"/bin/ls","-l","/tmp",NULL}; */
    size_t bufsize = 1024;
	pid_t pid;

	buffer = malloc(bufsize * sizeof(char));
	if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

	while (1)
	{
		printf("#CisFun :) >$: ");
		getline(&buffer, &bufsize, stdin);
        argv = split_line(buffer, " \t\r\n\a");
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
        }
	}
	return (0);	
}