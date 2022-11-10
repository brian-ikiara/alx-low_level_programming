#!/bin/bash
gcc -Wall -Wextra -Werror -prdantic -c *.c
ar -rc liball.a *.o
