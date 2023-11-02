#include "main.h"

/**
 * read_textfile - Reads a text fild prints it to the POSIX standard output.
 * @filename: The name of the fil= to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed.
 *         If the file cannot be ened or read, or if there are write faile or
 *         return 0. If filename is NULL, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, wr, opn;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	opn = open(filename, O_RDONLY);
	re = read(opn, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (opn == -1 || re == -1 || wr == -1 || re != wr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(opn);
	return (wr);
}
