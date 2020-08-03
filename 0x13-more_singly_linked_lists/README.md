# 0x13. C - More singly linked lists

About this project:

- How to use singly linked liststs

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

### [lists.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/lists.h "lists.h")
### LISTS HEADER

### Mandatory

### [0-print_listint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/lists.h   "0-print_listint.c")
Function that prints all the elements of a listint_t list.  
Prototype: size_t print_listint(const listint_t *h);  
Return: the number of nodes.  
Format: see example.  
You are allowed to use printf.

### [1-listint_len.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/1-listint_len.c  "1-listint_len.c")
Function that returns the number of elements in a linked listint_t list.  
Prototype: size_t listint_len(const listint_t *h);  

### [2-add_nodeint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/2-add_nodeint.c  "2-add_nodeint.c")
Function that adds a new node at the beginning of a listint_t list.  
Prototype: listint_t *add_nodeint(listint_t **head, const int n);  
Return: the address of the new element, or NULL if it failed.

### [3-add_nodeint_end.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/3-add_nodeint_end.c  "3-add_nodeint_end.c")
Function that adds a new node at the end of a listint_t list.  
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);  
Return: the address of the new element, or NULL if it failed.

### [4-free_listint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/4-free_listint.c "4-free_listint.c")
Function that frees a listint_t list.  
Prototype: void free_listint(listint_t *head);

### [5-free_listint2.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/5-free_listint2.c "5-free_listint2.c")
Function that frees a listint_t list.  
Prototype: void free_listint2(listint_t **head);  
The function sets the head to NULL.

### [6-pop_listint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/6-pop_listint.c "6-pop_listint.c")
Function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).  
Prototype: int pop_listint(listint_t **head);  
if the linked list is empty return 0.

### [7-get_nodeint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/7-get_nodeint.c "7-get_nodeint.c")
Function that returns the nth node of a listint_t linked list.  
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);  
where index is the index of the node, starting at 0.  
if the node does not exist, return NULL.

### [8-sum_listint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/8-sum_listint.c "8-sum_listint.c")
Function that returns the sum of all the data (n) of a listint_t linked list.  
Prototype: int sum_listint(listint_t *head);  
if the list is empty, return 0.

### [9-insert_nodeint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/9-insert_nodeint.c "9-insert_nodeint.c")
Function that inserts a new node at a given position.  
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);  
where idx is the index of the list where the new node should be added. Index starts at 0.  
Returns: the address of the new node, or NULL if it failed.  
if it is not possible to add the new node at index idx, do not add the new node and return NULL.  

### [10-delete_nodeint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/10-delete_nodeint.c "10-delete_nodeint.c")
Function that deletes the node at index index of a listint_t linked list.  
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);  
where index is the index of the node that should be deleted. Index starts at 0.  
Returns: 1 if it succeeded, -1 if it failed.

### [100-reverse_listint.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/100-reverse_listint.c "100-reverse_listint.c")
Function that reverses a listint_t linked list.  
Prototype: listint_t *reverse_listint(listint_t **head);  
Returns: a pointer to the first node of the reversed list.  
You are not allowed to use more than 1 loop.  
You are not allowed to use malloc, free or arrays.  
You can only declare a maximum of two variables in your function.  


