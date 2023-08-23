#!/bin/bash
for file in *.c; do
	gcc -c -fPIC "$file"
done

gcc -shared -o liball.so *.o -lm
