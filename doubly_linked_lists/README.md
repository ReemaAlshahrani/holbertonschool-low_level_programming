# C - Doubly Linked Lists

## Project Overview
Implementation of a Doubly Linked List (DLL) in C, allowing for forward and backward traversal through nodes.

## Requirements
- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` (with `-Wall -Werror -Wextra -pedantic -std=gnu89`)
- **Style:** Betty Style
- **Header:** `lists.h`

## Data Structure
```c
typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
