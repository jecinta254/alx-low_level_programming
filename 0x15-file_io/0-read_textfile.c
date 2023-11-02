#include "main.h"

/**
 * read_textfile - This will read text and prints it
 * @filename: name of file to read
 * @letters: content read
 * Return: content read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int our_file;
	ssize_t lengths;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	our_file = open(filename, O_RDONLY);
	if (our_file == -1)
		return (0);
	lengths = read(our_file, &buf[0], letters);
	lengths = write(STDOUT_FILENO, &buf[0], lengths);
	close(our_file);
	return (lengths);
}
