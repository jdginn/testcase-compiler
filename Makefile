main.out:
	/usr/local/opt/llvm/bin/clang++ main.cpp -gdwarf-4 -o main.out

clean:
	rm main.out
