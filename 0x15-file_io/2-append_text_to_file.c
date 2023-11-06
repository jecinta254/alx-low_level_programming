#include "main.h"

/**
 * _strlen2 - This will count number of characters in a string
 * @s: Our string
 * Return: String length.
 */
size_t _strlen2(char *s)
{
	size_t x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

/**
 * append_text_to_file - program that appends text at the end of a file.
 * @filename: The file's name
 * @text_content: what is to be added at the end of file.
 * Return: 1 (Success) and -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int our_file;

	if (!filename)
		return (-1);

	our_file = open(filename, O_RDWR | O_APPEND);
	if (our_file < 0)
		return (-1);

	if (text_content)
		if (write(our_file, text_content, _strlen2(text_content)) < 0)
			return (-1);
	close(our_file);
	return (1);
}
