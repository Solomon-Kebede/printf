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
