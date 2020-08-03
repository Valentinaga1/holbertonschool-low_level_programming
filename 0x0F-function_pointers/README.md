# 0x0F. C - Function pointers

About this project:

- What are function pointers and how to use them.
- What does a function pointer exactly hold.
- Where does a function pointer point to in the virtual memory.

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

### [function_pointers.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/function_pointers.h "function_pointers.h")
### FUNCTION POINTERS HEADER

### Mandatory

### [0-print_name.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c   "0-print_name.c")
Function that prints a name.  
Prototype: void print_name(char *name, void (*f)(char *));

### [1-array_iterator.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c   "1-array_iterator.c")
Function that executes a function given as a parameter on each element of an array.  
Prototype: void array_iterator(int *array, size_t size, void (*action)(int));  
where size is the size of the array.  
and action is a pointer to the function you need to use.  

### [2-int_index.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c   "2-int_index.c")
Function that searches for an integer.  
Prototype: int int_index(int *array, int size, int (*cmp)(int));  
where size is the number of elements in the array array.  
cmp is a pointer to the function to be used to compare values.  
int_index returns the index of the first element for which the cmp function does not return 0.  
If no element matches, return -1.  
If size <= 0, return -1.  

### [3-main.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-main.c   "3-main.c")
This file should contain your main function only.  
You are not allowed to code any other function than main in this file.  
You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function.  
You have to use atoi to convert arguments to int.  
You are not allowed to use any kind of loop.  
You are allowed to use a maximum of 3 if statements.  

### [3-op_functions.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c   "3-op_functions.c")
This file should contain the 5 following functions (not more):
- op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
- op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
- op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
- op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
- op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

### [3-get_op_func.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c   "3-get_op_func.c")
This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.  
Prototype: int (*get_op_func(char *s))(int, int);  
where s is the operator passed as argument to the program.  
This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add.  
You are not allowed to use switch statements.  
You are not allowed to use for or do ... while loops.  
You are not allowed to use goto.  
You are not allowed to use else.  
You are not allowed to use more than one if statement in your code.  
You are not allowed to use more than one while loop in your code.  
If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL.  

### [3-calc.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h   "3-calc.h")
This file should contain all the function prototypes and data structures used by the program. 