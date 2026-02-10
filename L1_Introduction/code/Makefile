step_0:
	python3 hello.py

preprocess:
	gcc -E hello.c

assemble:
	gcc -S hello.c

object_file:
	gcc -c hello.c

linking:
	gcc hello.o -o hello

full_step:
	gcc hello.c -o hello

