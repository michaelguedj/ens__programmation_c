#include <stdio.h>

void dix()
{
    int i;
    for (i=0; i<10; i++)
        printf("%d \n", i);
}

void n_premiers_entiers(int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%d \n", i);
}

void n_premiers_carres(int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%d \n", i*i);
}

void n_premiers_pairs(int n)
{
    int i;
    for (i=0; i<n; i++)
        if (i%2 == 0)
            printf("%d \n", i);
}

void n_premiers_impairs(int n)
{
    int i;
    for (i=0; i<n; i++)
        if (i%2 == 1)
            printf("%d \n", i);
}

void dix_fois_coucou()
{
    int i;
    for (i=0; i<10; i++)
        printf("Coucou !\n");
}

void
n_fois_coucou(int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("Coucou !\n");
}

int somme_n_premiers_entiers(int n)
{
    int i, res=0;
    for (i=0; i<n; i++)
        res += i;
    return res;
}

int somme_n_premiers_carres(int n)
{
    int i, res=0;
    for (i=0; i<n; i++)
        res += i*i;
    return res;
}

int somme_n_premiers_pairs(int n)
{
    int i, res=0;
    for (i=0; i<n; i++)
        if (i%2 == 0)
            res += i;
    return res;
}

int somme_n_premiers_impairs(int n)
{
    int i, res=0;
    for (i=0; i<n; i++)
        if (i%2 == 1)
            res += i;
    return res;
}

int somme_n_premiers_pairs_carres(int n)
{
    int i, res=0;
    for (i=0; i<n; i++)
        if (i%2 == 0)
            res += i*i;
    return res;
}

int toto(int n)
{
    int i, res=0;
    for (i=0; i<n; i++)
        if (i%3 == 0)
            res += i;
    return res;
}

int toto2(int n, int k)
{
    int i, res=0;
    for (i=0; i<n; i++)
        if (i%k == 0)
            res += i;
    return res;
}

void main()
{
    /*
    dix();
    n_premiers_entiers(5);
    n_premiers_carres(7);
    n_premiers_pairs(7);
    n_premiers_impairs(7);
    dix_fois_coucou();
    n_fois_coucou(3);
    printf("%d ", somme_n_premiers_entiers(4));
    printf("%d ", somme_n_premiers_carres(4));
    printf("%d ", somme_n_premiers_pairs(4));
    printf("%d ", somme_n_premiers_impairs(4));
    printf("%d ", somme_n_premiers_pairs_carres(5));
    printf("%d ", toto(8));
    */
    printf("%d ", toto2(8, 3));
    printf("%d ", toto2(8, 4));

}
