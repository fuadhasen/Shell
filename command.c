#include "main.h"

/**
 * execute_command_or_args - check command
 * @buffer: user input
 * @av: program name
 *
 * Return: void
 */

void execute_command_or_args(char *buffer, char *av[])
{
	if (buffer[0] == '/')
	{
		if (_strchr(buffer, ' ') == NULL)
		{
			excute_command(buffer, av);
		}
		else
		{
			excute_command_args(buffer, av);
		}
	}
	else
	{
		char *f = path(buffer);

		if (f != NULL)
		{
			if (_strchr(f, ' ') == NULL)
			{
				excute_command(f, av);
			}
			else
			{
				excute_command_args(f, av);
			}
		}
		else
		{
			char m[128];
			int len = _snprintf(m, sizeof(m), "%s: 1: %s: not found\n", av[0], buffer);

			if (len > 0)
			{
				write(STDERR_FILENO, m, len);
			}
		}
		free(f);
	}
}
