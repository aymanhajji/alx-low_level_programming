#!/bin/bash
c_files=$(ls *.c 2>/dev/null)
for file in $c_files; do
	object_file = "${file%.c}.o"
	gcc -c "$file" -o "object_file"
done
ar rcs libmy.a *.o
