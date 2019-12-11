#include <stdio.h>
#include <stdlib.h>
#include "liste_chainee.h"

t_list init_list()
{
    t_list p = malloc(sizeof(t_node));
    p->val = 0; // size of the list
    p->next = NULL;
    return p;
}

int p_empty(t_list lst)
{
    return lst->next == NULL;
}

void print_list(t_list lst)
{
    t_list p = lst;
    printf("\nsize of the list: %d\ncontent: ", lst->val);
    if ( p_empty(lst) ) {
        printf("[]\n\n\n");
        return;
    }
    else
    {
        p = p->next;
    }
    printf("[");
    while ( p->next != NULL )
    {
        printf("%d, ", p->val);
        p=p->next;
    }
    printf("%d", p->val);
    printf("]\n\n\n");
}

int head(t_list lst)
{
    if ( p_empty(lst) )
    {
        printf("liste vide");
        exit(1);
    }
    return lst->val;
}

t_list tail(t_list lst)
{
    if ( p_empty(lst) )
    {
        printf("liste vide");
        exit(1);
    }
    return lst->next;
}

void append(t_list lst, int e)
{
    t_list p = lst;
    while ( p->next != NULL ) p=p->next;
    p->next = malloc(sizeof(t_node));
    p = p->next;
    p->val = e;
    p->next = NULL;
    lst->val = lst->val+1; // nb of elements ++
}

// supprimer le premier e rencontre
void delete_element(t_list lst, int e)
{
    t_list p1, p2;

    if (p_empty(lst)) return; // not found

    p1 = lst;
    p2 = lst->next;

    while(p2 != NULL)
    {
        if (p2->val == e)
        {
            p1->next = p2->next;
            free(p2);
            lst->val --;
            return;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
}
