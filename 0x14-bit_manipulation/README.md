# 0x14. C - Bit manipulation

About this project:

- How to manipulate bits and use bitwise operators.

## Requirements

- Allowed editors: vi, vim, emacs
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar

## File Descriptions

### [holberton.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/holberton.h "holberton.h")
### HOLBERTON HEADER

### Mandatory

### [0-binary_to_uint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c  "0-binary_to_uint.c")
Function that converts a binary number to an unsigned int.  
Prototype: unsigned int binary_to_uint(const char *b);  
where b is pointing to a string of 0 and 1 chars.  
Return: the converted number, or 0 if:
- there is one or more chars in the string b that is not 0 or 1
- b is NULL

### [1-print_binary.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c "1-print_binary.c")
Function that prints the binary representation of a number.  
Prototype: void print_binary(unsigned long int n);  
You are not allowed to use arrays.  
You are not allowed to use malloc.  
You are not allowed to use the % or / operators.  

### [2-get_bit.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/2-get_bit.c "2-get_bit.c")
Function that returns the value of a bit at a given index.  
Prototype: int get_bit(unsigned long int n, unsigned int index);  
where index is the index, starting from 0 of the bit you want to get.  
Returns: the value of the bit at index index or -1 if an error occured.

### [3-set_bit.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/3-set_bit.c "3-set_bit.c")
Function that sets the value of a bit to 1 at a given index.  
Prototype: int set_bit(unsigned long int *n, unsigned int index);  
where index is the index, starting from 0 of the bit you want to set.  
Returns: 1 if it worked, or -1 if an error occurred.

### [4-clear_bit.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/4-clear_bit.c "4-clear_bit.c")
Function that sets the value of a bit to 0 at a given index.  
Prototype: int clear_bit(unsigned long int *n, unsigned int index);  
where index is the index, starting from 0 of the bit you want to set.  
Returns: 1 if it worked, or -1 if an error occurred.

### [5-flip_bits.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/5-flip_bits.c "5-flip_bits.c")
Function that returns the number of bits you would need to flip to get from one number to another.  
Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);  
You are not allowed to use the % or / operators.


