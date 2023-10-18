#include "main.h"

/**
 * _getenv - get environ variables
 * @name: name of environ variable
 *
 * Return: value of that variable or null
 */

char *_getenv(const char *name)
{
	int i;
	size_t name_len = _strlen(name);

	for (i = 0; environ[i] != NULL; ++i)
	{
		if (_strncmp(name, environ[i], name_len) == 0 && environ[i][name_len] == '=')
		{
			return (environ[i] + name_len + 1);
		}
	}
	return (NULL);
}

