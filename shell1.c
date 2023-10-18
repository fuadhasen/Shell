#include "main.h"

/**
 * run_shell
 * @ac: no of arguments
 * @av: arguments
 *
 * Return: void
 */

void run_shell(int ac, char *av[])
{
	char *buffer = NULL;
	size_t size = 0;
	int t = 1;
	(void)(ac);

	while (t)
	{
		print_prompt();
		read_input(&buffer, &size);
		if (_strcmp(buffer, "") == 0)
		{
			continue;
		}
		else
		{
			execute_command_or_args(buffer, av);
		}
	}
	free(buffer);
}
