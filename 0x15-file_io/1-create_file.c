#include "main.h"

/**
 * create_file - Function
 * @filename: Name of file
 * @text_content: What to write to file
 *
 * Description: Creates a file and adds a string/sentence
 * into it.
 * Return: 1, success; -1, if filename is null or if it
 * fails.
 * On error, stderr.
 */

int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, length = 0;

	/* Edge case I */
	if (filename == NULL)
		return (-1);

	/* Edge case II */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	/* Initialize the fildes */
	fd_open = open(filename, O_CREAT | O_RDWR | O_TRUNC. 0600);
	fd_write = write(fd_open, text_content, length);

	/* Edge case III */
	if (fd_open == -1 || fd_write == -1)
		return (-1);

	/* Remember to shake well after use ;D */
	close(fd_open);

	/* If Ops are successfull */
	return (1);
}
