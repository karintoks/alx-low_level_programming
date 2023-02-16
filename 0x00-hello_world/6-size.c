#include <stdio.h>

/**
 * main - prints "the size of various types on the computer it is compiled and run on.
 * Return: Always 0.
 */

int main(void)
        {
                printf("Size of char: %zu byte(s)\n", sizeof(char));

                printf("size of int; %zu byte(s)\n", sizeof(int));
                printf("size of long int; %zu byte(s)\n", sizeof(long int));
                printf("size of long long int; %zu byte(s)\n", sizeof(long long int));
                printf("size of float; %zu byte(s)\n", sizeof(float));
                return (0);
        }
