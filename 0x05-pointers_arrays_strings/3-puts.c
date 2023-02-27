#include "main.h"

/**
 * _puts -> prints a string followed by new line to stdout
 * @str: the string to be printed
 * Return: Nothing
 * This code is written by karintoks.
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
