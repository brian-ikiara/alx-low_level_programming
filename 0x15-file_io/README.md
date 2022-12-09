# File I/O

----------------------------------------------------------------------------------------

## SYNOPSIS

### Definition of Terms

_Operating System_

> In short, OS. It is software that is the interface between the user and the computer's hardware.

_I/O_

> Refers to <u>Input/Output</u>.

_File_

> A collection of data stored in the secondary/auxillary memory.

_File Descriptor_

> A process unique identifier(*handle*) for a file or other I/O resource such as a <u>pipe</u> or a <u>network socket</u>. Its value is a non-negative integer, with negatives reserved for <u>"no value"</u> or <u>error values</u>

_File Table_

> A collection of information about all the open files while the OS is running.

_POSIX_

> Refers to <u>Portable Operating System Interface</u>. It's a set of formal descriptions that provide a standard for the design of operating systems, especially UNIX compatible ones.

_API_

> Refers to <u>Application Programming Interface</u>. It's a software interface where to or more computer programs can interact with each other.([Wikipedia](https://en.wikipedia.org/wiki/API))

_Symbols_

> Any function, variable or keyword used in code. Primitive data type whose instances have a unique human-readable form.([Wikipedia](https://en.wikipedia.org/wiki/Symbol_(programming))).

_System call_

> A programmatic way in which a computer program requests a service from the kernel of the operating system.([GeeksForGeeks](https://www.geeksforgeeks.org/introduction-of-system-call/))

_Kernel_

> Central component of an operating system that manages the operations of the computer and its hardware. It serves as the bridge between software and hardware in a computer.([GeeksForGeeks](https://www.geeksforgeeks.org/kernel-in-operating-system/))

_Routine_

> A function with a specified programming interface. A sequence of code that is intended for the execution of user's programs and I/O Ops.

_Process_

> A program in execution and represents the basic unit of CPU utilization. It's an active entity that is created when an executable file gets loaded into memory.([GeeksForGeeks](https://www.geeksforgeeks.org/difference-between-routine-and-process/))

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

For File I/O, we'll be dealing mainly with fildes(file descriptor(s)) and for each process in a standard UNIX based OS, we'll have 3(corresponding to the 3 standard streams) - Here's a table for that:

| fildes integral value | Name | \<unistd.h\> file stream |
| -- | -- | -- |
| 0 | Standard Input | STDIN_FILENO | stdin |
| 1 | Standard Output | STDIN_FILENO | stdout |
| 2 | Standard Error | STDIN_FILENO | stderr |

These fildes will have certain Ops done upon them, and these include:

### Creation

``` c
	ssize_t open(char *pathname, int flags, mode_t mode);
```

Returns a positive integer greater than -1 if it succeeds. It accepts flags that have an integral value. Here are the common flags and their values:

| Flag | Integral value | Description |
| -- | -- | -- |
| O_RDONLY | 0 | Opens file in read 0nly mode |
| O_WRONLY | 1 | Opens file in write only mode |
| O_RDWR | 2 | Opens file in read-write mode |
| O_APPEND | 8 | Adds new data to a file without replacing the original contents of the file |
| O_CREAT | 256 | Creates a new file if it creates it as a regular file |
| O_TRUNC | 512 | If file exists and O_WRONLY/O_RDWR permissions are set, the file's contents are truncated to 0 |

The mode specifies the file permissions a file is going to have. Expressed in octal format
> 0777 specifies r, w, x permissions to all user groups in the system.

### Manipulation

```c
	ssize_t read(int fd, void *buf, size_t count);
	ssize_t write(int fd, void *buf, size_t count);
```

The functions read() and write() read through and write until the number of bytes specified by count respectively. They both
return the number of bytes either read or written from and to a given file descriptor fd.

Used as follows(let r/w_bytes represent the bytes returned from read/write()):

*From fd_open = open("filename", O_RDWR | O_CREAT, 0777);, we have*:

```c
	buff = malloc(count);

	/*For read(): fd = fd_open; count = just count specified */
	r_bytes = read(fd_open, buff, count);
	/* For write(): fd = fildes for std.stream; count = r_bytes */
	w_bytes = write(STDOUT_FILENO, buff, r_bytes);
```

### File descriptor table

This is the collection of file descriptors which are inherently pointers to the entries of the file table.
The file table entries are structures in-memory surrogates of an open file, which are created when a process requests to open a file. They maintain the file's position.
When an entry is instantiated i.e. when open() is called, and entry is added. So long as this entry is not marked as used, a process is likely to go on forever as
the process' parent will return true for this duration. So to remedy this we can perform the following operation to the FDT:

```c
	int close(int fd);
```

The fildes fd used is that created when open() is called. In use it'll be(*from previous example*):

```c
	close(fd_open);
```

--------------------------------------------------------------------------

## REMARKS

This part is crucial for the Simple_Shell project that is coming soon. Can't wait. :grinning:
