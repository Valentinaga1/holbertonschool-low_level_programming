# 0x00. C - Hello, World

About this project:

- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## File Descriptions

### Mandatory

### [0.preprocessor](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x00-hello_world/0-preprocessor "0.preprocessor")
Script that runs a C file through the preprocessor and save the result into another file.
The C file name will be saved in the variable $CFILE.
The output should be saved in the file c

### [1.compiler](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x00-hello_world/1-compiler "1.compiler")
Script that compiles a C file but does not link.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.

### [2.assembler ](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x00-hello_world/2.assembler  "2.assembler ")
Script that generates the assembly code of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

### [3.name ](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x00-hello_world/3.name  "3.name")
Script that compiles a C file and creates an executable named cisfun.
The C file name will be saved in the variable $CFILE

### [4.puts.c ](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x00-hello_world/4.puts.c  "4.puts.c")
C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
Use the function puts
You are not allowed to use printf
Your program should end with the value 0

### [5.printf.c ](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x00-hello_world/5.printf.c  "5.printf.c") 
C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option

### [6.size.c  ](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x00-hello_world/6.size.c   "6.size.c ") 
C program that prints the size of various types on the computer it is compiled and run on.
You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option