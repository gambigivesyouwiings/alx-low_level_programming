#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc libutila.a *.c
