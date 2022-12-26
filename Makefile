src_C_test	= Source_files/C/cTest.c

src_CPP_test= Source_files/C++/cppTest.cpp

obj_C_test	= Object_files/C_obj_test.o

obj_CPP_test= Object_files/CPP_obj_test.o

exe_main	= Executable_files/main

shell_dirs	= Shell_files/directories.sh
shell_test	= Shell_files/test.sh

all: directories clean C_obj_test CPP_obj_test exec rm_obj test

directories:
	@./$(shell_dirs)

C_obj_test:
	gcc -g -c $(src_C_test) -o $(obj_C_test)

CPP_obj_test:
	g++ -g -c $(src_CPP_test) -o $(obj_CPP_test)

exec:
	g++ $(obj_C_test) $(obj_CPP_test) -o $(exe_main)

rm_obj:
	rm -rf Object_files

clean:
	rm -rf Executable_files/*

test:
	@./$(shell_test)