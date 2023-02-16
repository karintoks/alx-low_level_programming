#include <stdio.h>
/**
 * main - prints "the size of various types on the computer it is compiled and run on.
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of char: %d byte(s)\n", sizeof(char));
printf("size of int; %d byte(s)\n", sizeof(int));
printf("size of long int; %d byte(s)\n", sizeof(long int));
printf("size of long long int; %d byte(s)\n", sizeof(long long int));
printf("size of float; %d byte(s)\n", sizeof(float));
return (0);
}
