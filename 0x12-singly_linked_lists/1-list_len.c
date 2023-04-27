#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h)
	{
		if (h->str)
			i++;
		if (h->next)
			i++;
	}
	return (i);
}