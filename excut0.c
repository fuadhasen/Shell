#include "main.h"

/**
 * excute_command - execve with out arg
 * @buf: user input
 * @av: program name
 */

void excute_command(char *buf, char *av[])
{
	pid_t child;

	child = fork();
	if (child == -1)
	{
		perror("fork fail\n");
		exit(EXIT_FAILURE);
	}
	if (child == 0)
	{
		char *arg[2];

		arg[0] = buf;
		arg[1] = NULL;
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
