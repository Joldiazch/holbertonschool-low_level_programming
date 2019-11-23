#include "holberton.h"

int main(int gc, char **argv, char **env)
{
	char **paths, *buff, *search_paths;
	char del[7] = " \t\r\n\a";
	pid_t child;
	int status, i = 0;
	ssize_t c = 1;
	list_t *head;
	(void) gc;

	head = NULL;
	search_paths = _getenv("PATH", env);
	paths = _tokenizar(search_paths, ":");
	build_list(paths, &head);
	while (1)
	{
		buff = _read_line(&c);
		argv = _tokenizar(buff, del);
		argv[0] = _concatenar(&head, argv[0]);
		child = fork();
		if (child == -1)
		{
			perror("unborn child");
		}
		else if (child == 0)
		{
			if (argv[0] && (execve(argv[0], argv, NULL) == -1))
			{
				perror("Mishellada");
			}
			exit(EXIT_FAILURE);
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
