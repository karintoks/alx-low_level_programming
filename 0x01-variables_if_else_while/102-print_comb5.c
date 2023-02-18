#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Style
*Return: 0 success
*/
int main(void)
{
int p, q;
for (p = '0'; p <= 98; p++)
{
for (q = p + 1; q <= 98; q++)
{
putchar((p / 10) + '0');
putchar((p % 10) + '0');
putchar(' ');
putchar((q / 10) + '0');
putchar((p % 10) + '0');
if (p == 98 && q == 98)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
