# C - Hash Tables

## Description
This project covers the implementation of Hash Tables in C. It includes creating a hash table, implementing a hash function (djb2), and handling collisions using the chaining method with linked lists.

## Requirements
* All files compiled on Ubuntu 20.04 LTS using `gcc`
* Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Code follows the Betty style
* No global variables

## Data Structures
```c
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
