#include "main.h"
/**
 * _print_rev_recursion - prints string backwards
 * @s: string to print rev
 * This code ia written by karintoks
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}