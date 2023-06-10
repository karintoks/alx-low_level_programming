#include <stdio.h>
/**
* main - program prints its name, followed by a new line.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
	(void)argc; /* Indicates that argc is unused*/
	/* (void)argv;  Indicates that argv is unused*/
	printf("%s\n", argv[0]);
	return (0);
}

