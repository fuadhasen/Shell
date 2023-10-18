#include "main.h"

/**
 * _strcat - concatnate string
 * @dest: str1
 * @src: source string
 *
 * Return: void
 */

void _strcat(char *dest, const char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
