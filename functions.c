#include "holberton.h"

/**
 * _printDec - prints decimal
 * @arg: list for d module
 * Return: count
 */

int _printDec(va_list arg)
{
	long int arguments;
	long int count = 0;
	long int div;

	arguments = va_arg(arg, int);

	if (arguments == 0)
	{
		_putchar(48);
		count++;
	}
	if (arguments < 0)
	{
		_putchar('-');
		arguments = -arguments;
		count++;
	}
	if (arguments >= 0)
	{
		div = 1;
		while (div <= arguments)
		{
			div *= 10;
		}
		while (div > 1)
		{
			div /= 10;
			_putchar((arguments / div) + '0');
			arguments %= div;
			count++;
		}
	}
	return (count);
}

/**
 * _printchar - modulo c
 * @vl: list for c
 * Return: c
 */

int _printchar(va_list vl)
{
	int i;

	i = (char)va_arg(vl, int);
	return (_putchar(i));
}

/**
 * _printstring - modulo s
 * @vl: list for s
 * Return: s
 */

int _printstring(va_list vl)
{
	char *s;

	s = (char *)va_arg(vl, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	return (_putstring(s));
}

int convert(unsigned int num, int base, int flag)
{
	static char Lower[] = "0123456789abcdef";
	static char Upper[] = "0123456789ABCDEF";
	int print;
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		if (flag == 0)
			*--ptr = Lower[num % base];
		else
			*--ptr = Upper[num % base];
		num /= base;
	} while (num != 0);

	print = _puts(ptr);
	return (print);
}
