# 0x04. C - More functions, more nested loops

About this project:

- What are nested loops and how to use them.
- What is a function and how do you use functions.
- What is the difference between a declaration and a definition of a function.
- What is a prototype.
- Scope of variables.
- What are the gcc flags -Wall -Werror -pedantic -Wextra.
- What are header files and how to to use them with #include.

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

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/holberton.h "holberton.h")
HOLBERTON HEADER

### Mandatory

### [0-isupper.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/holberton.h "0-isupper.c")
Function that checks for uppercase character.  
Prototype: int _isupper(int c);  
Returns 1 if c is uppercase.  
Returns 0 otherwise.  

### [1-isdigit.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/1-isdigit.c "1-isdigit.c")
Function that checks for a digit (0 through 9).  
Prototype: int _isdigit(int c);  
Returns 1 if c is a digit.  
Returns 0 otherwise.  

### [2-mul.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/2-mul.c "2-mul.c")
Function that multiplies two integers.  
Prototype: int mul(int a, int b);

### [3-print_numbers.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/3-print_numbers.c "3-print_numbers.c")
Function that prints the numbers, from 0 to 9, followed by a new line.  
Prototype: void print_numbers(void);  
You can only use _putchar twice in your code.

### [4-print_most_numbers.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/4-print_most_numbers.c "4-print_most_numbers.c")
Function that prints the numbers, from 0 to 9, followed by a new line.  
Prototype: void print_most_numbers(void);  
Do not print 2 and 4.  
You can only use _putchar twice in your code.

### [5-more_numbers.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/5-more_numbers.c "5-more_numbers.c")
Function that prints 10 times the numbers, from 0 to 14, followed by a new line.  
Prototype: void more_numbers(void);  
You can only use _putchar three times in your code.

### [6-print_line.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/6-print_line.c "6-print_line.c")
Function that draws a straight line in the terminal.  
Prototype: void print_line(int n);  
You can only use _putchar function to print.  
Where n is the number of times the character _ should be printed.  
The line should end with a \n.  
If n is 0 or less, the function should only print \n.

### [7-print_diagonal.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/7-print_diagonal.c "7-print_diagonal.c")
Function that draws a diagonal line on the terminal.  
Prototype: void print_diagonal(int n);  
You can only use _putchar function to print.  
Where n is the number of times the character \ should be printed.  
The diagonal should end with a \n.  
If n is 0 or less, the function should only print a \n.

### [8-print_square.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/8-print_square.c "8-print_square.c")
Function that prints a square, followed by a new line.  
Prototype: void print_square(int size);  
You can only use _putchar function to print.  
Where size is the size of the square.  
If size is 0 or less, the function should print only a new line.  
Use the character # to print the square.

### [9-fizz_buzz.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/9-fizz_buzz.c "9-fizz_buzz.c")
Program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.  
Each number or word should be separated by a space.  
You are allowed to use the standard library.

### [10-print_triangle.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/10-print_triangle.c "10-print_triangle.c")
Function that prints a triangle, followed by a new line.  
Prototype: void print_triangle(int size);  
You can only use _putchar function to print.  
Where size is the size of the triangle.  
If size is 0 or less, the function should print only a new line.  
Use the character # to print the triangle. 


