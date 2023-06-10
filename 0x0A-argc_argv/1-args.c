#include <stdio.h>
/**
 * main - Program prints the number of arguments passed into the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Indicates that argv is unused*/
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
