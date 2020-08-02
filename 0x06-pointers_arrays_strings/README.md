# 0x06. C - More pointers, arrays and strings

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

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/holberton.h "holberton.h")
#### HOLBERTON HEADER

### Mandatory

### [0-strcat.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c "0-strcat.c")
Function that concatenates two strings.  
Prototype: char *_strcat(char *dest, char *src);  
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.  
Returns a pointer to the resulting string dest.

### [1-strncat.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c "1-strncat.c")
Function that concatenates two strings.  
Prototype: char *_strncat(char *dest, char *src, int n);  
The _strncat function is similar to the _strcat function, except that
- it will use at most n bytes from src; and.
- src does not need to be null-terminated if it contains n or more bytes.   
Return a pointer to the resulting string dest.

### [2-strncpy.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c "2-strncpy.c")
Function that copies a string.  
Prototype: char *_strncpy(char *dest, char *src, int n);  
Your function should work exactly like strncpy.

### [3-strcmp.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c "3-strcmp.c")
Function that compares two strings.  
Prototype: int _strcmp(char *s1, char *s2);  
Your function should work exactly like strcmp.

### [4-rev_array.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c "4-rev_array.c")
Function that reverses the content of an array of integers.  
Prototype: void reverse_array(int *a, int n);  
Where n is the number of elements of the array.

### [5-string_toupper.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.c "5-string_toupper.c")
Function that changes all lowercase letters of a string to uppercase.  
Prototype: char *string_toupper(char *);  

### [6-cap_string.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c "6-cap_string.c")
Function that capitalizes all words of a string.  
Prototype: char *cap_string(char *);   
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.

### [7-leet.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c "7-leet.c")
Function that encodes a string into 1337.
- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1  

Prototype: char *leet(char *);  
You can only use one if in your code.  
You can only use two loops in your code.  
You are not allowed to use switch.  
You are not allowed to use any ternary operation.

### [8-rot13.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x06-pointers_arrays_strings/8-rot13.c "8-rot13.c")
Function that encodes a string using rot13.  
Prototype: char *rot13(char *);  
You can only use if statement once in your code.  
You can only use two loops in your code.  
You are not allowed to use switch.  
You are not allowed to use any ternary operation.




