# 0x08. C - Recursion

About this project:

- What is recursion.
- How to implement recursion.
- In what situations you should implement recursion.
- In what situations you shouldn’t implement recursion.

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

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/holberton.h "holberton.h")
#### HOLBERTON HEADER

### Mandatory

### [0-puts_recursion.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c "0-puts_recursion.c")
Function that prints a string, followed by a new line.  
Prototype: void _puts_recursion(char *s);

### [1-print_rev_recursion.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/1-print_rev_recursion.c "1-print_rev_recursion.c")
Function that prints a string in reverse.  
Prototype: void _print_rev_recursion(char *s);

### [2-strlen_recursion.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/2-strlen_recursion.c "2-strlen_recursion.c")
Function that returns the length of a string.  
Prototype: int _strlen_recursion(char *s);

### [3-factorial.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/3-factorial.c "3-factorial.c")
Function that returns the factorial of a given number.  
Prototype: int factorial(int n);  
If n is lower than 0, the function should return -1 to indicate an error.  
Factorial of 0 is 1.

### [4-pow_recursion.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/4-pow_recursion.c "4-pow_recursion.c")
Function that returns the value of x raised to the power of y.  
Prototype: int _pow_recursion(int x, int y);  
If y is lower than 0, the function should return -1.  

### [5-sqrt_recursion.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/5-sqrt_recursion.c "5-sqrt_recursion.c")
Function that returns the natural square root of a number.  
Prototype: int _sqrt_recursion(int n);  
If n does not have a natural square root, the function should return -1.

### [6-is_prime_number.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/6-is_prime_number.c "6-is_prime_number.c")
Function that returns 1 if the input integer is a prime number, otherwise return 0.  
Prototype: int is_prime_number(int n);

### [7-is_palindrome.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/7-is_palindrome.c "7-is_palindrome.c")
Function that returns 1 if a string is a palindrome and 0 if not.  
Prototype: int is_palindrome(char *s);  
An empty string is a palindrome.
