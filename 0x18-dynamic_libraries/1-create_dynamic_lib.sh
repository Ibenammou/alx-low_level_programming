#!/bin/bash
C_Files=$(find . -type f -name "*.c")
Out_Files=""
for file in $C_Files; do
	filename=$(basename "$file" .c)
	
	gcc -c "$file" -o "$filename.o"
	Out_Files+=" $filename.o"
done

gcc -shared -o liball.so $Out_Files

rm -f *.o
