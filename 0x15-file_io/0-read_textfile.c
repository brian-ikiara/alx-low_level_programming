#include "main.h"

/**
 * read_textfile - Function
 * @filename: Name of file
 * @letters: Number of characters to print from file
 *
 * Description: Reads a text file and prints it to
 * stdout.
 * Return: fd_write, number of bytes function can read
 * and write; 0, if filename is null or if function fails.
 * On error, stderr.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd_open, fd_read, fd_write;
	char *buffer;

	/* Initialize buffer */
	buffer = malloc(sizeof(char) * letters);

	/* Edge case I */
	if (!buffer)
		return (0);

	/* Edge case II */
	if (!filename)
		return (0);

	/* Initialize the file descriptors */
	fd_open = open(filename, O_RDONLY);
	fd_read = read(fd_open, buffer, letters);
	fd_write = write(STDOUT_FILENO, buffer, fd_read);

	/* Edge case III */
	if (fd_open == -1 || fd_read == -1 || fd_write == -1 || fd_write != fd_read)
	{
		free(buffer);
		return (0);
	}

	/* Important to free memory that's been dynamically allocated */
	free(buffer);
	/* Closes the file, to prevent an infinite loop */
	close(fd_open);

	/* Byte size */
	return (fd_write);
}
