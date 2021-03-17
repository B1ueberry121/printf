#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - searches for the length of the string
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * _putstring - writes the character p to stdout
 * @s: the character to print
 * Return: On success 1
 */

int _putstring(char *s)
{
	return (write(1, s, _strlen(s)));
}
