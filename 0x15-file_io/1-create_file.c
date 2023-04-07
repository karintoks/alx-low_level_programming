#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * This code is written by DONJOR
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int kar;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	kar = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (kar == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters = nletters + 1)
		;

	rwr = write(kar, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(kar);

	return (1);
}
