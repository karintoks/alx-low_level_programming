#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * This code is written by DONJOR
 * Return: numbers of letters printed. if it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int kar;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	kar = open(filename, O_RDONLY);

	if (kar == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(kar, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(kar);

	free(buf);

	return (nwr);
}
