#include "main.h"

/**
 * _strchr - find char on str
 * @str: parent string
 * @c: the char to be find
 *
 * Return: null, ptr to that char position
 */

char *_strchr(const char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
