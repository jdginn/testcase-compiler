main.out:
	clang main.cpp -gdwarf-4 -o testcase.out

clean:
	rm testcase.out
