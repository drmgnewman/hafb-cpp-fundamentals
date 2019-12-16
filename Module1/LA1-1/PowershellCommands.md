## C++ Environment in Windows
- VSCode // code editor (https://code.visualstudio.com)
- git // for source control (https://git-scm.com)
- cmake // to work with project (https://cmake.org)
- g++ (mingw) // compiler for windows. You need to add (https://www.mingw.org) binaries to PATH env. varialbe.
- github.com // for cloud service (http://github.com)

## Terminal Commands
Note: ($ )

## File System
``` bash
.    # (one dot) present working
```
## C++ Basics
- File extension: `.cpp`

## g++ Compiler
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

## g++ Compiler for 2 files
For example, if you have a library 
under the `functions.cpp` and `functions.h` files,
and you have driver under `run_functions.cpp` you need to compile as follows
```bash
# To compile, list ALL source (cpp) files
# -o for output file name'
$ g++ funcctions.cpp run_functions.cpp -o run_funcctions
# To run
$./run_functions.exe
```

### C++ Template
```cpp
#include <iostream>
using namespace std;
int main()
{
    return 0;
}
```

## Doxygen documentation
```cpp
// Add C/C++ Intellisense
// Add Code Spell Extension
// Add Doxygen Documentation Generator
// Add the plugin to VSCode: Doxygen Documentation Generator

// Run /** and <Enter>
```