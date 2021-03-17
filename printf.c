#include "holberton.h"

/**
 * _printf - works like printf
 * @format: modules
 * Return: count
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;

	va_start(arg, format);
	if (*format == 0)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{

			switch (*(format + 1))
			{
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
				default:
					count += _putchar('%');
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(arg);
	return (count);
}
