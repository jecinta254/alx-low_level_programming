#include "main.h"

/**
 * _strlen - This counts number of characters in a string
 * @s: The String
 * Return: Length
 */
size_t _strlen(char *s)
{
	size_t x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

/**
 * create_file - Creates file and adds text to the file.
 * @filename: file itself
 * @text_content: Content to be added to file.
 * Return: 1 (Success) and -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	int our_file;

	if (!filename)
		return (-1);

	our_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (our_file == -1)
		return (-1);

	if (text_content)
		if (write(our_file, text_content, _strlen(text_content)) < 0)
			return (-1);
	close(our_file);
	return (1);
}
