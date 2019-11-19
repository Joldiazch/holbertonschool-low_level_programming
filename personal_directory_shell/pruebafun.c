#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1024
#define DELIM " "
char **split_line(char *line)
{
  int bufsize = BUFSIZE, position = 0;
  char **tokens = malloc(bufsize * sizeof(char*));
  char *token;

  if (!tokens) {
    fprintf(stderr, "lsh: allocation error\n");
    exit(1);
  }

  token = strtok(line, " ");
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

    token = strtok(NULL, DELIM);
  }
  tokens[position] = NULL;
  return tokens;
}

int main()
{
	char *buffer, **argv = NULL;
    size_t bufsize = 1024;
	int i = 0, j =0;

	buffer = malloc(bufsize * sizeof(char));
	if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

	getline(&buffer, &bufsize, stdin);
    argv = split_line(buffer);
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	} 
	
	return (0);	
}