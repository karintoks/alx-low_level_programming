#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * This code is written by DONJOR
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i = i - 1)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count = count + 1;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
