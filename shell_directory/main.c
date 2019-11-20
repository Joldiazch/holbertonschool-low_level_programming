#include "holberton.h"

int main()
{
	char *buf, **argv;
	char del[5] = " \t\r\n\a";
	pid_t child;
	int status;
	
	while (1)
	{
		buf = _read_line();
		argv = _tokenizar(buf, del);
		child = fork();
		if (child == -1)
		{
			perror("unborn child");
		}
		else if (child == 0)
		{
			execve(argv[0], argv, NULL);
		}
		else
		{
			wait(&status);
		}
	}
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	return (0);
}