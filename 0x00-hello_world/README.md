# 0x00. C - Hello, World

About this project:

- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc

## Requirements
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
You are not allowed to use system
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## File Descriptions

### 0-preprocessor
A bash script that runs a C file, saved in the variable $CFILE, through the preprocessor and saves the result into another file, named c

### 1-compiler 
A bash script that compiles a C file, saved in the variable $CFILE, but does not link. The output file will be named the same as the C file, but with the extension .o instead of .c

### 2-assembler 
A bash script that generates the assembly code of a C file, saved in the variable $CFILE. The output file will be named the same as the C file, but with the extension .s instead of .c.

### 3-name 
A script that compiles a C file, saved in the variable $CFILE, and creates an executable named cisfun.

### 4-puts.c 
A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line using the function puts.

### 5-printf.c 
A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line using the function printf.

### 6-size.c 
A C program that prints the size of various types on the computer it is compiled and run on