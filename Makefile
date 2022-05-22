main.out:
	@echo "Compiling testcase..."
	clang++ main.cpp -gdwarf-4 -o testcase.out
	cp testcase.out.dSYM/Contents/Resources/DWARF/testcase.out testcase.dwarf

clean:
	rm -r testcase.out testcase.dwarf testcase.out.dSYM
