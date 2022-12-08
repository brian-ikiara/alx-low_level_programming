#include "main.h"

/**
 * append_text_to_file - Function
 * @filename: Name of file
 * @text_content: Text to be appended to the file
 *
 * Description: Appends text to the end of the file.
 * Return: 1, success & file exists; -1, if:
 *	a. filename is NULL
 *	b. file lacks necessary permissions
 *	c. file doesn't exits
 *	d. both open() and write() fail
 * On error, stderr.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, len = 0;

	/* Edge case I */
	if (!filename)
		return (-1);
	/* Edge case II */
	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	/* Initialize fildes */
	fd_open = open(filename, O_WRONLY | O_APPEND);
	fd_write = write(fd_open, text_content, len);

	/* Edge case III: If both open() & write() fail */
	if (fd_open == -1 || fd_write == -1)
		return (-1);

	/* Important to close an open file */
	close(fd_open);

	return (1);
}
