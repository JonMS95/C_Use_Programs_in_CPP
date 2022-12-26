src_C_main	= Source_files/C/main.c

src_CPP_by2 = Source_files/C++/multByTwo.cpp

obj_C_main	= Object_files/C_obj_main.o

obj_CPP_by2 = Object_files/CPP_obj_multByTwo.o

exe_main	= Executable_files/main

shell_dirs	= Shell_files/directories.sh
shell_test	= Shell_files/test.sh

all: directories clean C_obj_main CPP_obj_by2 exec rm_obj test

directories:
	@./$(shell_dirs)

C_obj_main:
	gcc -g -c $(src_C_main) -o $(obj_C_main)

CPP_obj_by2:
	g++ -g -c $(src_CPP_by2) -o $(obj_CPP_by2)

exec:
	gcc $(obj_C_main) $(obj_CPP_by2) -o $(exe_main)

rm_obj:
	rm -rf Object_files

clean:
	rm -rf Executable_files/*

test:
	@./$(shell_test)