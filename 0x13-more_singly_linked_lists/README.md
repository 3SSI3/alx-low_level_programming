# More Singly Linked List
Learning more about **Singly linked lists** in **C language**.At the end of this project expected to know;
- How to use linked lists.
- Start to look for the right source of information without too much help.
## Resources
**Read or watch:**
- Google
- Youtube

## The data structure used for this project:
 
```c
/**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  * 
  */
 typedef struct listint_s
 {
 	int n;
 	struct listint_s *next;
 } listint_t;
``` 

## FILES CREATED FOR THE TASKS.

| Filename | Description |
|----------|-------------|
| 0-print_listint.c | Prints all the elements of a listint_t list |
| 1-listint_len.c | Returns the number of elements in a linked listint_t list |
| 2-add_nodeint.c | Adds a new note at the beginning of a listint_t list |

