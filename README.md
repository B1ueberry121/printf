# Printf Function Project: Make a printf function

This project is based on creating a printf function. Using the write and putchar function to print characters and integers.
We will test how to implement printf based on different arguments passed to the function. Arguments passed will be
be identified by different format specifiers indicating what needs to be printed. Arguments passed in the source code are via switch cases when the program 
finds '%' it tells to look for the next character and depending on what that character is, it is how is going to print. The following characters the program needs
to check are called format specifiers.

Format specifiers: 
	
	%i - integers
	%x - hexadecimal integers
	%s - array of characters(string)
	%c - characters
	%%- special characters

In the repository for the function there will be four files needed. There will be a header file (holberton.h) containing prototypes for all the functions needed,
a printf file with the arguments for the function to take, a functions file that has all the functions  needed be the printf file as well as a man page 
for the printf function.

Here is a layout of the printf function:

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)  //First we check if argument passed is NULL, if not proceed to print//
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(format + 1)) //We add 1 because we need to know what specifier comes after %//
			{
				case '\0':
					return (-1);
				case '%':
					count += _putchar('%');
					format++;
					break;

---------------------------------------------------------------->
##Test cases

The following are printf test cases for the function to see if it works:

printf("String:[%s]\n", NULL); //We compare our _printf to printf if returns the same thing, success//
printf("Char:[%c]\n", NULL);
_printf("Char:[%c]\n", NULL);
_printf("String:[%s]\n", NULL);
_printf("Char:[%c]\n");
printf("Char:[%c]\n");
printf("String: i'm %d years old and %s\n" ,age, "Hey!");
_printf("String: i'm %d years old %s\n" ,age, "Hey!");
_printf("String:[%s]\n", phrase);
printf("String:[%s]\n", phrase);
[11:10 AM]
len = _printf("Percent:[%%]\n%");
len2 = printf("Percent:[%%]\n%");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);


### Authors
Christian Laboy && Gabriel Martinez

