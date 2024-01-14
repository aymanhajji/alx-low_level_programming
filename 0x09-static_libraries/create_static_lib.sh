#!/bin/bash
ar -rc liball.a
for file in *.c; do
	gcc -c "$file" -o "${file%.c}.o"
	ar -rcs liball.a "${file%.c}.o"
done
