# 0x18. C - Dynamic libraries

## About this project:

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
 Basic usage nm, ldd, ldconfig

## Requirements

- Allowed editors: vi, vim, emacs
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- Allowed syscalls: read, write, open, close.
- You are allowed to use _putchar

## Bash
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 14.04 LTS
- All your files should end with a new line (why?)
- The first line of all your files should be exactly #!/bin/bash
- A README.md file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable

## File Descriptions

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/holberton.h "holberton.h")
## HOLBERTON HEADER

### Mandatory

### [libholberton.so](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libholberton.so "libholberton.so")
Create the dynamic library libholberton.so containing all the functions listed below:  

```
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
```
### [1-create_dynamic_lib.sh](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/1-create_dynamic_lib.sh "1-create_dynamic_lib.sh")
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

### Blog
Write a blog post describing the differences between static and dynamic libraries. [HERE MY BLOG]()

### Advanced

### [100-operations.so](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/100-operations.so "100-operations.so")
Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
```
julien@ubuntu:~/0x18$ cat 100-tests.py
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
66 + -76 = -10
66 - -76 = 142
66 x -76 = -5016
66 / -76 = 0
66 % -76 = 66
julien@ubuntu:~/0x18$ python3 100-tests.py 
-34 + -57 = -91
-34 - -57 = 23
-34 x -57 = 1938
-34 / -57 = 0
-34 % -57 = -34
julien@ubuntu:~/0x18$ python3 100-tests.py 
-5 + -72 = -77
-5 - -72 = 67
-5 x -72 = 360
-5 / -72 = 0
-5 % -72 = -5
julien@ubuntu:~/0x18$ python3 100-tests.py 
39 + -62 = -23
39 - -62 = 101
39 x -62 = -2418
39 / -62 = 0
39 % -62 = 39
julien@ubuntu:~/0x18$ 
```
### [101-make_me_win.sh](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.sh "101-make_me_win.sh")
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?  

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:
```
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
```

- You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
- The system is an Linux Ubuntu 16.04
- The server has internet access
- Our mole will be only able to run two commands from a shell script, without being detected by MSS
- Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
- Our mole has only the authorization to upload one file on the server. It will be your shell script
- Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
- Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
- MSS will use the same terminal and session than our mole
- Before running the gm program, MSS always check the content of the directory
- MSS always exit after running the program gm
- TL;DR; This is what is going to happen  

```
mss@gm_server$ . ./101-make_me_win.sh
mss@gm_server$ rm 101-make_me_win.sh
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ history -c
mss@gm_server$ clear
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ md5sum gm
d52e6c18e0723f5b025a75dea19ef365  gm
mss@gm_server$ ./gm 9 8 10 24 75 9
--> Please make me win!
mss@gm_server$ exit
```