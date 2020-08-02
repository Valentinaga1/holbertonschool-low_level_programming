# 0x07. C - Even more pointers, arrays and strings

About this project:

- What are pointers to pointers and how to use them.
- What are multidimensional arrays and how to use them.
- What are the most common C standard library functions to manipulate strings.

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

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/holberton.h "holberton.h")
#### HOLBERTON HEADER

### Mandatory

### [0-memset.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c "0-memset.c")
Function that fills memory with a constant byte.  
Prototype: char *_memset(char *s, char b, unsigned int n);  
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b.  
Returns a pointer to the memory area s.

### [1-memcpy.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c "1-memcpy.c")
Function that copies memory area.  
Prototype: char *_memcpy(char *dest, char *src, unsigned int n);  
The _memcpy() function copies n bytes from memory area src to memory area dest.  
Returns a pointer to dest.

### [2-strchr.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c "2-strchr.c")
Function that locates a character in a string.  
Prototype: char *_strchr(char *s, char c);  
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.

### [3-strspn.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c "3-strspn.c")
Function that gets the length of a prefix substring.  
Prototype: unsigned int _strspn(char *s, char *accept);  
Returns the number of bytes in the initial segment of s which consist only of bytes from accept.

### [4-strpbrk.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strpbrk.c "4-strpbrk.c")
Function that searches a string for any of a set of bytes.  
Prototype: char *_strpbrk(char *s, char *accept);  
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept.  
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.

### [5-strstr.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/5-strstr.c "5-strstr.c")
Function that locates a substring.  
Prototype: char *_strstr(char *haystack, char *needle);  
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared.  
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

### [7-print_chessboard.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/7-print_chessboard.c "7-print_chessboard.c")
Function that prints the chessboard.  
Prototype: void print_chessboard(char (*a)[8]);

### [8-print_diagsums.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/8-print_diagsums.c "8-print_diagsums.c")
Function that prints the sum of the two diagonals of a square matrix of integers.  
Prototype: void print_diagsums(int *a, int size);  
You are allowed to use the standard library.

### [9-set_string.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/9-set_string.c "9-set_string.c")
Function that sets the value of a pointer to a char.  
Prototype: void set_string(char **s, char *to);







