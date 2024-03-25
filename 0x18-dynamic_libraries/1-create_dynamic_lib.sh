#!/bin/bash

# Define the name of the library
libname="liball.so"

echo "Creating dynamic library: $libname"
gcc -c -fPIC *.c
if [ -f $libname ]; then
    echo "Library $libname already exists, replacing it"
    rm $libname
fi
gcc -shared -o $libname *.o
echo "Library created successfully: $libname"