#include "main.h"
/**
 * read_textfile -This program will read and print text
 * From a file to stdout.
 * @filename:Name of the file created.
 * @letters:Number of letters to be read and printed in the file.
 * Return:Actual number of read and printed letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int our_file;
	char *s;
	ssize_t read_length, write_length;

	if (!filename)
		return (0);
	our_file = open(filename, O_RDONLY);
	if (our_file < 0)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (!s)
		return (0);
	read_length = read(our_file, s, letters);
	if (read_length < 0)
	{
		free(s);
		return (0);
	}

	s[read_length] = '\0';
	close(our_file);

	write_length = write(STDOUT_FILENO, s, read_length);
	if (write_length < 0)
	{
		free(s);
		return (0);
	}
	free(s);
	return (write_length);
}
