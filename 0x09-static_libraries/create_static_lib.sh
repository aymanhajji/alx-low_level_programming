#!/bin/bash
for file in $0x09-static_libraries; do
	object_file = "${file%.c}.o"
	gcc -c "$file" -o "$object_file"
done
ar rcs liball.a *.o
