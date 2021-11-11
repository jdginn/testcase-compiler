# testcase-compiler
Toy repo for building C++ binaries with debug information

### NOTE for users unaccustomed to macos:
The mach-o format generated by clang on macos does not include dwarf debug information in the .out file (no matter how much you coax it). Dwarf debug is found in a separate file:

> For a binary `foo.out`, debug info will be found at: `foo.out.dSYM/Contents/Resources/DWARF/foo.out`. Provided you do your debugging on this file, rather than the binary itself, you will find all the expected dwarf support.

This also applies to the rust compiler, although in that case the location is slightly different.

> For a binary `target/debug/foo` the debug info will be found at: `target/debug/deps/foo*.dSYMS/Contents/Resources/DWARF/foo*`
