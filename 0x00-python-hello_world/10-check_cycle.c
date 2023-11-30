#include "lists.h"

/**
 * check_cycle - checks if linked listcontain a cycle
 * @list: linked list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *single = list;
	listint_t *doublle = list;

	if (!list)
		return (0);

	while (single && doublle && doublle->next)
	{
		single = single->next;
		doublle = doublle->next->next;
		if (single == doublle)
			return (1);
	}
	return (0);
}
