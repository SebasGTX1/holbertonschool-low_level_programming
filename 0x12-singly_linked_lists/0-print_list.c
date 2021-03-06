#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: number of nodes or
 * [0] (nil) if str is null
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!(h->str))
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
