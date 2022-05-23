#include "lists.h"
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	do
  	{
  		
    		nodes++;
		printf("%d\n", h->n);
		h = h->next;
  	}
  	while(h);
  	return (nodes);

}
