#include "main.h"


/**
 * read_textfile - Reads a text fild prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         If the file cannot be ened or read, or if there are write failures,
 *         return 0. If filename is NULL, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char buffer[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		close(fd);
		return (0);
	}

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		close(fd);
		return (0);
	}

	close(fd);

	return (write_count);
}
