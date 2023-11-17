#!/bin/bash

# Compile all .c files and create a static library liball.a

# Compile each .c file into an object (.o) file
gcc -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o
