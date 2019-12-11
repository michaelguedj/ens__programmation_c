#include <stdio.h>
#include <stdlib.h>
#include "liste_chainee.h"

void main()
{
    t_list lst = init_list();

    printf("p_empty(lst):");
    printf("%d \n", p_empty(lst));

    print_list(lst);

    append(lst, 10);
    print_list(lst);
    printf("p_empty(lst): ");
    printf("%d \n", p_empty(lst));

    append(lst, 20);
    print_list(lst);

    append(lst, 30);
    print_list(lst);

    printf("on supprime %d\n", 10);
    delete_element(lst, 10);
    print_list(lst);

    printf("on supprime %d\n", 20);
    delete_element(lst, 20);
    print_list(lst);

    printf("on supprime %d\n", 40);
    delete_element(lst, 40);
    print_list(lst);

    printf("on supprime %d\n", 30);
    delete_element(lst, 30);
    print_list(lst);

    printf("on supprime %d\n", 30);
    delete_element(lst, 30);
    print_list(lst);

}
