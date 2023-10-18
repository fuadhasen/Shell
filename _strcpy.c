#include "main.h"

/**
 * _strcpy - copy the string
 * @dest: str to be overwritten
 * @src: source string
 *
 * Return: void
 */

void _strcpy(char *dest, const char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
}
