#include "main.h"

/*
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: filename output
 * text_content: content
 * Return: 1 success -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int our_file;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	our_file = open(filename, O_WRONGLY | O_APPEND);

	if (our_file == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

	rwr = write(our_file, text_content, nletters);

	if (rwr == -1)
		return (-1);
	}
	close(our_file);

	return (1);
}
