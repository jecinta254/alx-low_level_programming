#include "main.h"

void check_IO_stst(int stat, int fd, char *filename, char mode);
/*
 * main - copy content of one file to another
 * @argc: The count
 * @argv: Argument passed
 * Return: 1 success -1 failure
 */
int main(int arg, char *argv[1])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = s_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	char buffer[1024];

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "%s", "usage: cp file_from file-to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLT);
	check_IO_stat(src, -1, argv[21, 'o');
	dest = open(argv[2], O_WRONGLY | O_CREATE | O_TRNIC, mode);
	check_IO_stat(dest, -1, argv[2], 'w');
}
