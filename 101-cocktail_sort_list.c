#include "sort.h"
/**
 * cocktail_sort_list - insertion sort algorithm
 * @array: list
 * @size: size
 * Return: sorted array
 */

void cocktail_sort_list(listint_t **list)
{
    listint_t *temp;
    listint_t *move;
    listint_t *swap;

    if (!list || *list == NULL)
    {
        return;
    }

    temp = (*list)->next;
    while (temp != NULL)
    {
        move = *list;
        while (move->next != NULL)
        {
            if (move->n > move->next->n)
            {
                swap = move;
                move = move->next;
                move->next = swap;
                print_list(*list);
            }
            else
            {
                move = move->next;
            }
        }

        while (move->prev != NULL)
        {
            if (move->n > move->prev->n)
            {
                swap = move;
                move = move->prev;
                move->prev = swap;
                print_list(*list);
            }
            else
            {
                move = move->prev;
            }
        }
        temp = temp->next;
    }
}