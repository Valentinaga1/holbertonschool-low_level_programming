# 0x05. C - Pointers, arrays and strings

About this project:

- What are pointers and how to use them.
- What are arrays and how to use them.
- What are the differences between pointers and arrays.
- How to use strings and how to manipulate them.
- Scope of variables.

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

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/holberton.h "holberton.h")
#### HOLBERTON HEADER

### Mandatory

### [0-reset_to_98.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/0-reset_to_98.c "0-reset_to_98.c")
Function that takes a pointer to an int as parameter and updates the value it points to to 98.  
__Prototype: void reset_to_98(int *n);__     

### [1-swap.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/1-swap.c "1-swap.c")
Function that swaps the values of two integers.  
__Prototype: void swap_int(int *a, int *b);__ 

### [2-strlen.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/2-strlen.c "2-strlen.c")
Function that returns the length of a string.  
__Prototype: int _strlen(char *s);__ 

### [3-puts.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/3-puts.c "3-puts.c")
Function that prints a string, followed by a new line, to stdout.  
__Prototype: void _puts(char *str);__  

### [4-print_rev.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/4-print_rev.c "4-print_rev.c")
Function that prints a string, in reverse, followed by a new line.  
__Prototype: void print_rev(char *s);__  

### [5-rev_string.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/5-rev_string.c "5-rev_string.c")
Function that reverses a string.  
__Prototype: void rev_string(char *s);__  

### [6-puts2.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/6-puts2.c "6-puts2.c")
Function that prints every other character of a string, starting with the first character, followed by a new line.  
__Prototype: void puts2(char *str);__

### [7-puts_half.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/7-puts_half.c "7-puts_half.c")
Function that prints half of a string, followed by a new line.  
__Prototype: void puts_half(char *str);__  
The function should print the second half of the string.  
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2.

### [8-print_array.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/8-print_array.c "8-print_array.c")
Function that prints n elements of an array of integers, followed by a new line.  
__Prototype: void print_array(int *a, int n);__      
where n is the number of elements of the array to be printed.  
Numbers must be separated by comma, followed by a space.  
The numbers should be displayed in the same order as they are stored in the array.  
You are allowed to use printf.

### [9-strcpy.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/9-strcpy.c "9-strcpy.c")
Function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.   
__Prototype: char *_strcpy(char *dest, char *src);__      
Return value: the pointer to dest.  
