#include "main.h"

/**
 * path - handle the path
 * @buf: usr input
 *
 * Return: res
 */

char *path(char *buf)
{
	char full[100];
	const char *value, *path_cpy;

	if (_strchr(buf, ' ') != NULL)
	{
		return (excutels_l(buf));
	}
	else
	{
		value = _getenv("PATH");
		path_cpy = _strdup(value);
		if (path_cpy != NULL)
		{
			char *str = strtok((char *)path_cpy, ":");

			while (str != NULL)
			{
				_snprintf(full, sizeof(full), "%s/%s", str, buf);
				if (access(full, F_OK) == 0)
				{
					char *res = _strdup(full);

					return (res);
				}
				str = strtok(NULL, ":");
			}
		}
	}
	return (NULL);
}
