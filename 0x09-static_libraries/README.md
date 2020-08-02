# 0x09. C - Static libraries

About this project:

- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm

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

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x09-static_libraries/holberton.h "holberton.h")
#### HOLBERTON HEADER

### Mandatory

### [libholberton.a](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/libholberton.a "libholberton.a")
Creating the static library libholberton.a containing all the functions listed below:  
int _putchar(char c);  
int _islower(int c);  
int _isalpha(int c);  
int _abs(int n);  
int _isupper(int c);  
int _isdigit(int c);  
int _strlen(char *s);  
void _puts(char *s);  
char *_strcpy(char *dest, char *src);  
int _atoi(char *s);  
char *_strcat(char *dest, char *src);  
char *_strncat(char *dest, char *src, int n);  
char *_strncpy(char *dest, char *src, int n);  
int _strcmp(char *s1, char *s2);  
char *_memset(char *s, char b, unsigned int n);  
char *_memcpy(char *dest, char *src, unsigned int n);  
char *_strchr(char *s, char c);  
unsigned int _strspn(char *s, char *accept);  
char *_strpbrk(char *s, char *accept);  
char *_strstr(char *haystack, char *needle);  

### [create_static_lib.sh](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x08-recursion/create_static_lib.sh "create_static_lib.sh")
Script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
