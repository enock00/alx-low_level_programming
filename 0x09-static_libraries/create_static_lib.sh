#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc libbal.a *.o
ranlib libbal.a
