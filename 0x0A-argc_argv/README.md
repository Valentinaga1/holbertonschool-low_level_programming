# 0x0A. C - argc, argv

About this project:

- How to use arguments passed to your program.
- What are two prototypes of main that you know of, and in which case do you use one or the other.
 How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters.

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

### Mandatory

### [0-whatsmyname.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c "0-whatsmyname.c")
Program that prints its name, followed by a new line.  
If you rename the program, it will print the new name, without having to compile it again.  
You should not remove the path before the name of the program.

### [1-args.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/1-args.c "1-args.c")
Program that prints the number of arguments passed into it.  
Your program should print a number, followed by a new line.

### [2-args.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/2-args.c "2-args.c")
Program that prints all arguments it receives.  
All arguments should be printed, including the first one.  
Only print one argument per line, ending with a new line.

### [3-mul.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/3-mul.c "3-mul.c")
Program that multiplies two numbers.  
Your program should print the result of the multiplication, followed by a new line.  
You can assume that the two numbers and result of the multiplication can be stored in an integer.  
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1.

### [4-add.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/4-add.c "4-add.c")
Program that adds positive numbers.  
Print the result, followed by a new line.  
If no number is passed to the program, print 0, followed by a new line.  
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1.  
You can assume that numbers and the addition of all the numbers can be stored in an int.  

### [100-change.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/100-change.c "100-change.c")
Program that prints the minimum number of coins to make change for an amount of money.  
Usage: ./change cents.  
where cents is the amount of cents you need to give back.  
if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1.  
you should use atoi to parse the parameter passed to your program.  
If the number passed as the argument is negative, print 0, followed by a new line.  
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.  

