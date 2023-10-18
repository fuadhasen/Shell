#include "main.h"

/**
 * handleCharacter - Handles character formatting.
 * @args: Argument list.
 * @buffer: Buffer to store formatted string.
 * @count: Current count of characters in the buffer.
 *
 * Return: Updated character count in the buffer.
 */
int handleCharacter(va_list args, char *buffer, int count)
{
	char c = va_arg(args, int);

	buffer[count++] = c;
	return (count);
}

/**
 * handleString - Handles string formatting.
 * @args: Argument list.
 * @buffer: Buffer to store formatted string.
 * @count: Current count of characters in the buffer.
 *
 * Return: Updated character count in the buffer.
 */
int handleString(va_list args, char *buffer, int count)
{
	char *str = va_arg(args, char *);
	int i = 0;

	while (str[i])
	{
		buffer[count++] = str[i++];
	}
	return (count);
}

/**
 * handlePercentage - Handles percent formatting.
 * @buffer: Buffer to store formatted string.
 * @count: Current count of characters in the buffer.
 *
 * Return: Updated character count in the buffer.
 */
int handlePercentage(char *buffer, int count)
{
	buffer[count++] = '%';
	return (count);
}

