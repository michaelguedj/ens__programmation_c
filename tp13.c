#include <stdlib.h>
#include <stdio.h>

#define MAX 30

typedef struct Pile
{
    int taille;
    char tab[MAX];
} Pile;

// initialisation d'une pile
void init(Pile *p)
{
    p->taille=0;
}

void affichage(Pile *p)
{
    int i;
    printf("Pile :");
    for (i=0; i<p->taille; i++)
    {
        printf("%c", p->tab[i]);
    }
    printf("\n");
}

// est_vide : retourne VRAI si la pile est vide et FAUX sinon
int est_vide(Pile *p)
{
    return p->taille==0;
}

// taille : renvoie le nombre d'éléments dans la pile ;
int taille(Pile *p)
{
    return p->taille;
}

// empiler : ajoute un élément sur la pile
void empiler(Pile *p, char c)
{
    if (p->taille == MAX) return;
    p->tab[p->taille] = c;
    p->taille++;
}

// sommet : retourne l'élément de tête sans le dépiler
char sommet(Pile *p)
{
    char res = '_';
    if (! est_vide(p))
    {
        res = p->tab[p->taille-1];
    }
    return res;
}

// dépiler : enlève un élément de la pile et le retourne
char depiler(Pile *p)
{
    char res = sommet(p);
    if (! est_vide(p))
    {
        p->taille--;
    }
    return res;
}


int main()
{
    Pile *p;
    char tmp;

    p = malloc(sizeof(Pile));
    init(p);

    printf("taille : %d \n", p->taille);
    affichage(p);

    empiler(p, 'a');
    affichage(p);

    empiler(p, 'b');
    affichage(p);

    empiler(p, 'c');
    affichage(p);

    tmp = depiler(p);
    printf("\t on depile : %c\n", tmp);
    affichage(p);

    tmp = depiler(p);
    printf("\t on depile : %c\n", tmp);
    affichage(p);

    tmp = depiler(p);
    printf("\t on depile : %c\n", tmp);
    affichage(p);

    free(p);

    return EXIT_SUCCESS;
}
