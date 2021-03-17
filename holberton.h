#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdarg.h>

#define SPECIAL_CHAR '%'

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int _printstring(va_list vl);
int _printchar(va_list vl);
int _putstring(char *s);
int _printDec(va_list arg);

#endif
