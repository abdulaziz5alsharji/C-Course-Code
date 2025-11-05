/* 
# in C++ means ====> Preprocessor line (before compiling).

#include is Preprocessor Directive (Search for Preprocessor Directives list).
#include ==> Links a header file in the source code.

C++ Preprocessor And Preprocessor Directives:
https://www.geeksforgeeks.org/cpp/cpp-preprocessors-and-directives/

Preprocessor Directives in C++
Preprocessor directives are special instruction that are given to the preprocessor, which is a part of the compilation process that runs before the actual code is compiled.
These directives start with the # symbol and are used to prepare our code by including files, defining constants, or deciding which parts of the code should be compiled.

They are not regular C++ statements, so they do not end with a semicolon (;).

#include: Links a header file in the source code.

#define: Creates a symbolic or macro constant.

#undef: Deletes a macro that has already been defined.

#if / #elif / #else / #endif: Compilation that is conditional based on some expression.

#ifdef / #ifndef: Compilation that is conditional on the presence or absence of a macro.

#error: Halts the compilation process and produces an error notice.

#warning: During compilation, a warning notice is shown.

#pragma: Provide the compiler specific instructions.


int main() ==> Entry Point (Function), Return integer.

Read about namespace ==> https://www.geeksforgeeks.org/cpp/namespace-in-c/
Read about cout << ; and iostream Functions ==> https://www.geeksforgeeks.org/cpp/cout-in-c/ , 
https://www.w3schools.com/cpp/cpp_ref_iostream.asp

Compilation Steps: https://www.geeksforgeeks.org/cpp/how-to-compile-a-cpp-program-using-gcc/
Pre-processing the source code.
Compiling the source code.
Assembling the compiled file.
Linking the object code file to create an executable file.
[
1- Source code
2- Preprocessor (Preprocessed file (called expanded code) .i file) 
3- Compiler (Assembly code .s file)
4- Assembler (Object code .o file)
5- Linker
6- Executable file
]

*/  


#include <iostream>

using namespace std;

//Void return type is used in functions to indicate that the function does not return any value.

void print(string text = "") {
    cout << text << "\n";
} 
