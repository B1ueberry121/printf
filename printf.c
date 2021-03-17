#include "holberton.h"

/**
 * _printf - works like printf
 * @format: all argumenets recieved as an input
 * Return: count
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case '\0':
					return (-1);
				case '%':
					count += _putchar('%');
					format++;
					break;
				case 'c':
					count += _printchar(arg);
					format++;
					break;
				case 's':
					count += _printstring(arg);
					format++;
					break;
				case 'd':
				case 'i':
					count += _printDec(arg);
					format++;
					break;
				case 'x':
					count += convert(va_arg(arg, int), 16, 0);
					format++;
					break;
				case 'X':
					count += convert(va_arg(arg, int), 16, 1);
					format++;
					break;
				case 'b':
					count += convert(va_arg(arg, int), 2, 0);
					format++;
					break;
				case 'o':
					count += convert(va_arg(arg, int), 8, 0);
					format++;
					break;
				default:
					count += _putchar('%');
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	return (count);
}
