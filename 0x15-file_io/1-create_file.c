#include "main.h"

/*
 * create_file - program that creates a file
 * @filename -name of file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int our_file;
	int nletters;
	int rwr;

	if (filename)
		return (-1);

	our_file = open(filename, O_CREAT | O_WRONGLY | O_TRUNC, 0600);

	if (our_file == -1)
		return (-1);
	if (!text_content)
		text_content == "";

	for (nletters = 0, text_content[nletters]; nletters++)
		;
	rwr = write(our_file, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(our_file);

	return (1);
}
