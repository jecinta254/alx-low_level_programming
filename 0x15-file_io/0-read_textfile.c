#include "main.h"

/**
 * read_textfile - Reading text file and prints to the POSIX standard output
 * @filename: name of the fie to read
 * @letters: letters to read and print
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int our_file;
ssize_t byts;
char buf[READ_BUF_SIZE * 8];

if (!filename || !letters)
	return (0);
our_file = open(filename, O_RDONLY);
if (our_file == -1)
	return (0);
byts = read(our_file, &buf[0], letters);
byts = write(STDOUT_FILENO, &buf[0], byts);
close(our_file);
return (byts);
}
