#include "sort.h"
/**
 * insertion_sort_list- insertion sort algorithm
 * @list: list
 * Return: sorted array
 */
void insertion_sort_list(listint_t **list)
{
listint_t *curr, *auxiliar;
listint_t *tmp;

if (!list || *list == NULL)
return;
curr = *list;
if (curr->next == NULL)
return;
while (curr->next != NULL)
{
auxiliar = curr->next;
if (curr->n > auxiliar->n)
{
tmp = curr;
while (tmp != NULL && tmp->n > auxiliar->n)
{
tmp->next = auxiliar->next;
if (tmp->next != NULL)
{
tmp->next->prev = tmp;
}
auxiliar->prev = tmp->prev;
if (auxiliar->prev != NULL)
{
auxiliar->prev->next = auxiliar;
}
else
{
*list = auxiliar;
}
tmp->prev = auxiliar;
auxiliar->next = tmp;
print_list(*list);
tmp = auxiliar->prev;
}
continue;
}
curr = curr->next;
}
}
