#!/bin/bash -e
gcc -Wall -Wextra -Werror -prdantic -c *.c
ar -rc liball.a *.c
