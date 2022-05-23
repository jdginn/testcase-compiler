SHELL := /bin/bash
UNAME := $(shell 'uname')

testcase.out:
	echo "Compiling testcase..."
	clang++ testcase.cpp -gdwarf-4 -o testcase.out
    ifeq ($(UNAME),Darwin)
	 	cp testcase.out.dSYM/Contents/Resources/DWARF/testcase.out testcase.dwarf
    endif
    ifeq ($(UNAME),Linux)
	 	cp testcase.out testcase.dwarf
    endif

clean:
	rm testcase.out
	rm testcase.dwarf
	rm -r testcase.out.dSYM
