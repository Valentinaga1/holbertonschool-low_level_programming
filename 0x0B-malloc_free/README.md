# 0x0B. C - malloc, free

About this project:

- What is the difference between automatic and dynamic allocation.
- What is malloc and free and how to use them.
- Why and when use malloc.
- How to use valgrind to check for memory leak.

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

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/holberton.h "holberton.h")
### HOLBERTON HEADER

### Mandatory

### [0-create_array.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c  "0-create_array.c")
Function that creates an array of chars, and initializes it with a specific char.  
Prototype: char *create_array(unsigned int size, char c);  
Returns NULL if size = 0.  
Returns a pointer to the array, or NULL if it fails.

### [1-strdup.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c  "1-strdup.c")
Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.  
Prototype: char *_strdup(char *str);  
The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.  
Returns NULL if str = NULL.  
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.

### [2-str_concat.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c  "2-str_concat.c")
Function that concatenates two strings.  
Prototype: char *str_concat(char *s1, char *s2);  
The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated.  
if NULL is passed, treat it as an empty string.  
The function should return NULL on failure.

### [3-alloc_grid.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c  "3-alloc_grid.c")
Function that returns a pointer to a 2 dimensional array of integers.  
Prototype: int **alloc_grid(int width, int height);  
Each element of the grid should be initialized to 0.  
The function should return NULL on failure.  
If width or height is 0 or negative, return NULL.  

### [4-free_grid.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c  "4-free_grid.c)
Function that frees a 2 dimensional grid previously created by your alloc_grid function.  
Prototype: void free_grid(int **grid, int height);

### [5-argstostr.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/5-argstostr.c  "5-argstostr.c)
Function that concatenates all the arguments of your program.  
Prototype: char *argstostr(int ac, char **av);  
Returns NULL if ac == 0 or av == NULL.  
Returns a pointer to a new string, or NULL if it fails.  
Each argument should be followed by a \n in the new string.
