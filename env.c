#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * env - for env command
 *
 * Return: void
 */

void env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		char *equal_sign = _strchr(*env, '=');

		if (equal_sign != NULL)
		{

			*equal_sign = '\0';
			_printf("%s=%s\n", *env, equal_sign + 1);
			*equal_sign = '=';
		}

		env++;
	}
}

