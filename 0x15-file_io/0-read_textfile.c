#include "main.h"

/**
 * read_textfile - Reading text file and prints to the POSIX standard output
 * @filename: name of the fie to read
 * @letters: letters to read and print
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int our_file,
	ssize_t lrnr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	our_file = open(filename, O_RDONLY);
	if (our_file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(our_file);
		return (0);
	}
	lenr = read(our_file, buffer, letters);
	close(our_file);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
