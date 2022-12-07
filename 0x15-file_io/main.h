#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int _putchar(char);
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);

#endif
