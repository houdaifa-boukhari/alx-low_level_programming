#!/bin/bash
gcc -Wall -Wextra -Werror -c  -I. *.c
ar rcs liball.a *.o
