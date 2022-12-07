# <span style="color:blue">File I/O</span>

----------------------------------------------------------------------------------------

## SYNOPSIS

### Definition of Terms

<b>I/O</b>

> Refers to <u>Input/Output</u>.

<b>File Descriptor</b>

> A process unique identifier(*handle*) for a file or other I/O resource such as a <u>pipe</u> or a <u>network socket</u>. Its value is a non-negative integer, with negatives reserved for <u>"no value"</u> or <u>error values</u>

<b>POSIX</b>

> Refers to <u>Portable Operating System Interface</u>. It's a set of formal descriptions that provide a standard for the design of operating systems, especially UNIX compatible ones.

<b>API</b>

> Refers to <u>Application Programming Interface</u>. It's a software interface where to or more computer programs can interact with each other.([Wikipedia](https://en.wikipedia.org/wiki/API))

<b>Symbols</b>

> Any function, variable or keyword used in code.

<b>System call</b>

> 

<b>Kernel routine</b>

>

### General Idea

```c
	#include <fcntl.h>
	#include <stdlib.h>
	#include <sys/stat.h>
	#include <sys/types.h>
	#include <unistd.h>

	int main(int argc, char *argv[])
	{
		ssize_t fd_open, fd_read, fd_write;
		char *buffer;

		buffer = malloc(<size_x>);

		fd_open = open(<filename>, <flags>, <mode_t mode>);
		fd_read = read(fd_open, buffer, <size_x>);
		fd_write = write(<unistd.h constant>, buffer, fd_read);

		free(buffer);
		close(fd_open);

		return (0);
	}
```

----------------------------------------------------------------------------------------

## DESCRIPTION

Basically, operations that involve manipulation of files in the terminal. It's pretty interesting and amazing too.
Here are some of the symbols we'll be using for these Ops:

### Functions

open()

> A system call
