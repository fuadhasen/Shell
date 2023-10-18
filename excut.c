#include "main.h"

/**
 * excute_command_args - exec with arg
 * @buf: user input
 * @av: program name
 *
 * Return: void
 */

void excute_command_args(char *buf, char *av[])
{
	pid_t child;
	char *arg[256];
	int i = 0;

	char *str = strtok(buf, " ");

	while (str != NULL)
	{
		arg[i++] = str;
		str = strtok(NULL, " ");
	}
	arg[i] = NULL;

	child = fork();
	if (child == -1)
	{
		perror("fork fail");
		exit(EXIT_FAILURE);
	}
	if (child == 0)
	{
		if (execve(arg[0], arg, NULL) == -1)
		{
			_printf("%s: No such file or directory\n", av[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
