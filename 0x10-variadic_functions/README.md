# 0x10. C - Variadic functions

About this project:

- What are variadic functions.
- How to use va_start, va_arg and va_end macros.
- Why and how to use the const type qualifier.

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar

## File Descriptions

### [variadic_functions.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/variadic_functions.h "variadic_functions.h")
### VARIADIC FUNCTIONS HEADER

### Mandatory

### [0-sum_them_all.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/0-sum_them_all.c   "0-sum_them_all.c")
Function that returns the sum of all its parameters.  
Prototype: int sum_them_all(const unsigned int n, ...);  
If n == 0, return 0.

### [1-print_numbers.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/1-print_numbers.c   "1-print_numbers.c")
Function that prints numbers, followed by a new line.  
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);  
where separator is the string to be printed between numbers.  
and n is the number of integers passed to the function.  
You are allowed to use printf.  
If separator is NULL, don’t print it.  
Print a new line at the end of your function.  

### [2-print_strings.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/2-print_strings.c   "2-print_strings.c")
Function that prints strings, followed by a new line.  
Prototype: void print_strings(const char *separator, const unsigned int n, ...);  
where separator is the string to be printed between the strings.  
and n is the number of strings passed to the function.  
You are allowed to use printf.  
If separator is NULL, don’t print it.  
If one of the string is NULL, print (nil) instead.  
Print a new line at the end of your function.  

### [3-print_all.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/3-print_all.c   "3-print_all.c")
Function that prints anything.  
Prototype: void print_all(const char * const format, ...);  
where format is a list of types of arguments passed to the function  
- c: char
- i: integer
- f: float
- s: char * (if the string is NULL, print (nil) instead
- any other char should be ignored  

You are not allowed to use for, goto, ternary operator, else, do ... while.  
You can use a maximum of:
- 2 while loops
- 2 if  

You can declare a maximum of 9 variables.  
You are allowed to use printf.  
Print a new line at the end of your function.  