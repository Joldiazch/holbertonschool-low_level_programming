#include "holberton.h"

int main(/* int gc, char **ag, char **env */)
{
	char **argv, *buff;
	char del[7] = " \t\r\n\a";
	pid_t child;
	int status, i = 0;
	ssize_t c = 1;

	while (c != -1)
	{
		buff = _read_line(&c);
		argv = _tokenizar(buff, del);
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
	free(buff);
	return (0);
}