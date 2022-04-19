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
		_putchar(format[i]);

	va_end(arglist);
	return (strlen);
}

