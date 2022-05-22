testcase.out:
	@echo "Compiling testcase..."
	clang++ testcase.cpp -gdwarf-4 -o testcase.out
	cp testcase.out.dSYM/Contents/Resources/DWARF/testcase.out testcase.dwarf

clean:
	rm testcase.out
	rm testcase.dwarf
	rm -r testcase.out.dSYM
