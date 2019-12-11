#ifndef LISTE_CHAINEE_H_INCLUDED
#define LISTE_CHAINEE_H_INCLUDED

typedef struct t_node {
    int val;
    struct t_node *next;
} t_node;

typedef t_node *t_list;

t_list init_list();
int p_empty(t_list lst);
void print_list(t_list lst);
int head(t_list lst);
t_list tail(t_list lst);
void append(t_list lst, int e);
void delete_element(t_list lst, int e);

#endif // LISTE_CHAINEE_H_INCLUDED
