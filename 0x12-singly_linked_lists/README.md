# 0x12. C - Singly linked lists

About this project:

- When and why using linked lists vs arrays
- How to build and use linked lists

## Requirements

- Allowed editors: vi, vim, emacs
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar

## File Descriptions

### [lists.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/lists.h "lists.h")
### LISTS HEADER

### Mandatory

### [0-print_list.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c   "0-print_list.c")
Function that prints all the elements of a list_t list.  
Prototype: size_t print_list(const list_t *h);  
Return: the number of nodes.  
If str is NULL, print [0] (nil).  
You are allowed to use printf.  

### [1-list_len.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c   "1-list_len.c")
Function that returns the number of elements in a linked list_t list.  
Prototype: size_t list_len(const list_t *h);

### [2-add_node.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c   "2-add_node.c")
Function that adds a new node at the beginning of a list_t list.  
Prototype: list_t *add_node(list_t **head, const char *str);  
Return: the address of the new element, or NULL if it failed.  
str needs to be duplicated.  
You are allowed to use strdup.  

### [3-add_node_end.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c   "3-add_node_end.c")
Function that adds a new node at the end of a list_t list.  
Prototype: list_t *add_node_end(list_t **head, const char *str);  
Return: the address of the new element, or NULL if it failed.  
str needs to be duplicated.  
You are allowed to use strdup.  

### [4-free_list.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c   "4-free_list.c")
Function that frees a list_t list. 
Prototype: void free_list(list_t *head);