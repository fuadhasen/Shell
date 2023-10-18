#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string (excluding null byte).
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
