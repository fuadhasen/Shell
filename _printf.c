#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format string.
 * @...: Variable number of arguments.
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char buffer[1024];
	int written = 0;

	va_start(args, format);
	while (format && format[written])
	{
		if (format[written] != '%')
		{
			buffer[count++] = format[written];
		}
		else
		{
			switch (format[++written])
			{
				case 'c':
					count = handleCharacter(args, buffer, count);
					break;
				case 's':
					count = handleString(args, buffer, count);
					break;
				case '%':
					count = handlePercentage(buffer, count);
					break;
				default:
					break;
			}
		}
		written++;
	}
	va_end(args);
	buffer[count] = '\0';

	write(STDOUT_FILENO, buffer, count);
	return (count);
}

