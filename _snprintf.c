#include "main.h"

/**
 * custom_vsnprintf - vsn
 * @buf: user input
 * @fmt: format str
 * @args: argument
 *
 * Return: int see below
 */

int custom_vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
{
	int written = 0;
	int capacity = size - 1;

	while (*fmt && written < capacity)
	{
		if (*fmt == '%')
		{
			++fmt;

			switch (*fmt)
			{
				case 's':
					{
						char *arg = va_arg(args, char *);

						while (*arg && written < capacity)
						{
							*buf++ = *arg++;
							++written;
						}
						break;
					}
				default:
					*buf++ = *fmt;
					++written;
					break;
			}
		}
		else
		{
			*buf++ = *fmt;
			++written;
		}
		++fmt;
	}
	*buf = '\0';
	return (written);
}

int _snprintf(char *str, size_t size, const char *fmt, ...)
{
	va_list args;
	int written;

	va_start(args, fmt);
	written = custom_vsnprintf(str, size, fmt, args);
	va_end(args);

	return (written);
}

