#include <stdio.h>

/**
 * main - Program prints all arguments passed into the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k = k + 1)
	{
		printf("%s", argv[k]);
		printf("\n");
	}
	return (0);
}
