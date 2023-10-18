#include "main.h"

/**
 *
 *
 *
 */

void print_prompt(void)
{
	_printf("$ ");
	fflush(stdout);
}

void read_input(char **buffer, size_t *size)
{
	ssize_t read;

	read = getline(buffer, size, stdin);
	if (read == -1)
	{
		_printf("\n");
		exit_shell();
	}
	(*buffer)[read - 1] = '\0';
}

int input_is_exit(const char *buf)
{
	return (_strcmp(buf, "exit") == 0);
}
