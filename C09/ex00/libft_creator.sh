#!/bin/sh

cc -Wall -Werror -Wextra -c *.c
ar rcs libft.a *.o
rm -rf *.o
ranlib libft.a
