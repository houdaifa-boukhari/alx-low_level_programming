#ifndef LISTS_H
# define LISTS_H

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

# include <stdlib.h>
# include <stdio.h>

size_t print_dlistint(const dlistint_t *h);

#endif