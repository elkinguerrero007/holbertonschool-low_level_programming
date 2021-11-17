#ifndef LISTS_H
#define LISTS_H

/*std libs */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/*----------------- structs  */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/* ------------------ prototypes          */
size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif
