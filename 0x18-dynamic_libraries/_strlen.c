#!/bin/bash
gcc -Wall -fPIC -c _strlen.c -o _strlen.o
gcc -shared -o libdynamic.so _strlen.o
