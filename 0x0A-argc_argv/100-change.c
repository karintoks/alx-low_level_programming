#include <stdio.h>
/**
 * main - prints minimum number of coins
 * Return: 0
 *
 */
int main(void)
{
int cents;
cents = atoi(argv[1]);
printf("%d", min(cents, 0));
return (0);
}
