#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - single linked list.
 * @str: string - (malloc'ed string).
 * @len: length of the string.
 * @next: points to the next node.
 *
 * Descripton: singly linked list node structure.
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif /* #define LISTS_H */
