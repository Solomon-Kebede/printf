#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _strlen - determine the length of a string
 * @s: character string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _printf - emulate the printf
 * @format: character to be printed
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	int i, j, strlen;
	va_list arglist;

	strlen = _strlen(format);
	va_start(arglist, format);

	for (i = 0; i <= strlen; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				if (format[i - 1] != '%')
					_putchar('%');
			}
			/* TODO: HANDLING %c using a char argument */
			else if (format[i + 1] == 'c')
				_putchar(va_arg(arglist, int));
			else if (format[i + 1] == 's')
			{
				/* TODO: extract string from va_arg */
				/* as = va_arg(arglist, char *); */
				for (j = 0; as[j] != '\0'; j++)
					_putchar(as[j]);
				_putchar('\0');
			}
			else if  (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				int m = va_arg(arglist, int);

				_putchar(m + '0');
				/* TODO: any integer number should be printable */
			}
		/* normal print */
		else if (format[i - 1] != '%')
			_putchar(format[i]);

	va_end(arglist);
	return (strlen);
}
