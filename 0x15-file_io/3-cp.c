#include "main.h"

/**
 * _buffer - Function
 * @f: Name of file
 *
 * Description: Allocates 1024 bytes to a buffer.
 * Return: b, buffer.
 * On error, 99.
 */

char *_buffer(char *f)
{
	/* Initialize buffer to 1024 bytes */
	char *b = malloc(sizeof(char) * 1024);

	/* Edge case I */
	if (!b)
	{
		/**
		 * Intro to new function dprintf()
		 *
		 * dprintf(int fildes, const char *format, ...);
		 */
		dprintf(STDERR_FILENO, "Error: Can't write to &s\n", f);
		exit(99);
	}

	/* The buffer */
	return (b);
}

/**
 * cls - Function
 * @fd_open: File descriptor
 *
 * Description: Closes an open file.
 * Return: void.
 * On error, 100.
 */

void cls(ssize_t fd_open)
{
	ssize_t fd_close = close(fd_open);

	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %u\n", fd_open);
		exit(100);
	}
}

/**
 * main - Function
 * @ac: Number of cmds
 * @av: cmd args
 *
 * Description: Copies contents of a file to another file.
 * Return: 0, on success.
 * On error:
 *         1. If ac is incorrect, 97,
 *         2. If init doesn't exist or unreadable, 98,
 *         3. If final can't be created or unwritable, 99,
 *         4. if init or final can't be close, 100.
 */

int main(int ac, char *av[])
{
	int init, final, fd_read, fd_write;
	char *b = _buffer(av[2]);

	if (ac == 3)
	{
		init = open(av[1], O_RDONLY);
		fd_read = read(init, b, 1024);
		final = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

		do {
			if (init == -1 || fd_read == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
				free(b);
				exit(98);
			}

			fd_write = write(final, b, fd_read);
			if (final == -1 || fd_write == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				free(b);
				exit(99);
			}

			fd_read = read(init, b, 1024);
			init =  open(av[2], O_WRONLY | O_APPEND);
		} while (fd_read > 0);

		free(b);
		cls(init);
		cls(final);
	}
	else
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	return (0);
}
