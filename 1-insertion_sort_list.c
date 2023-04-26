#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{

    listint_t *curr, *prev;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    curr = (*list)->next;
    while (curr != NULL) {
        prev = curr->prev;
        while (prev != NULL && prev->n > curr->n) {
            /* Swap nodes */
            prev->next = curr->next;
            if (curr->next != NULL)
                curr->next->prev = prev;

            curr->next = prev;
            curr->prev = prev->prev;
            if (prev->prev != NULL)
                prev->prev->next = curr;
            prev->prev = curr;

            /* Move prev pointer back */
            prev = curr->prev;

            /* If the head node was swapped, update the list pointer */
            if (prev == NULL)
                *list = curr;

            /* Print the list after each swap */
            print_list(*list);
        }
        curr = curr->next;
    }
}
