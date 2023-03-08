#include "main.h"
/**
 * _strlen_recursion - messures string
 * @s: string to messure
 * Return: length
 * This code is written by karintoks
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	return (len);
}
