#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

void dix()
{
    int i=0;
    while (i<10)
    {
        printf("%d \n", i);
        i++;
    }
}

void n_premiers_entiers(int n)
{
    int i=0;
    while (i<n)
    {
        printf("%d \n", i);
        i++;
    }
}

void n_premiers_carres(int n)
{
    int i=0;
    while (i<n)
    {
        printf("%d \n", i*i);
        i++;
    }
}

void n_premiers_pairs(int n)
{
    int i=0;
    while (i<n)
    {
        if (i%2 == 0)
            printf("%d \n", i);
        i++;
    }
}

void n_premiers_impairs(int n)
{
    int i=0;
    while (i<n)
    {
        if (i%2 == 1)
            printf("%d \n", i);
        i++;
    }
}

void dix_fois_coucou()
{
    int i=0;
    while (i<10)
    {
        printf("Coucou !\n");
        i++;
    }
}

void n_fois_coucou(int n)
{
    int i=0;
    while (i<n)
    {
        printf("Coucou !\n");
        i++;
    }
}

int somme_n_premiers_entiers(int n)
{
    int i=0, res=0;
    while (i<n)
    {
        res += i;
        i++;
    }
    return res;
}

int somme_n_premiers_carres(int n)
{
    int i=0, res=0;
    while (i<n)
    {
        res += i*i;
        i++;
    }
    return res;
}

int somme_n_premiers_pairs(int n)
{
    int i=0, res=0;
    while (i<n)
    {
        if (i%2 == 0) res += i;
        i++;
    }
    return res;
}

int somme_n_premiers_impairs(int n)
{
    int i=0, res=0;
    while (i<n)
    {
        if (i%2 == 1) res += i;
        i++;
    }
    return res;
}

int somme_n_premiers_pairs_carres(int n)
{
    int i=0, res=0;
    while (i<n)
    {
        if (i%2 == 0) res += i*i;
        i++;
    }
    return res;
}

int toto(int n)
{
    int i=0, res=0;
    while (i<n)
    {
        if (i%3 == 0) res += i;
        i++;
    }
    return res;
}

int toto2(int n, int k)
{
    int i=0, res=0;
    while (i<n)
    {
        if (i%k == 0) res += i;
        i++;
    }
    return res;
}

int toto3()
{
    int i=1, res=0;
    while (i<=100)
    {
        res += i;
        i++;
    }
    return res;
}

int toto4(int a, int b)
{
    int i=a, res=0;
    while (i<=b)
    {
        res += i;
        i++;
    }
    return res;
}

void exo17()
{
    char input = ' ';
    while (input != 'q')
    {
        printf("q : ");
        scanf("%c", &input);
        getchar();
    }
    printf("Fin.");
}

/*
renvoie un int uniformément réparti entre 0 et RAND_MAX
bornes comprises)
*/
int alea(int n)
{
    assert (0 < n && n <= RAND_MAX);
    int partSize =
        n == RAND_MAX ? 1 : 1 + (RAND_MAX-n)/(n+1);
    int maxUsefull = partSize * n + (partSize-1);
    int draw;
    do
    {
        draw = rand();
    }
    while (draw > maxUsefull);
    return draw/partSize;
}

void exo18()
{
    int n=alea(100);
    int input;
    do
    {
        printf("? : ");
        scanf("%d", &input);
        if (input > n)
            printf("Trop grand !\n");
        else if (input < n)
            printf("Trop petit !\n");
    }
    while (input != n);
    printf("Trouve !");
}

void main()
{
    /*
    dix();
    n_premiers_entiers(5);
    n_premiers_carres(5);
    n_premiers_pairs(5);
    n_premiers_impairs(5);
    dix_fois_coucou();
    n_fois_coucou(5);
    printf("%d ", somme_n_premiers_entiers(4));
    printf("%d ", somme_n_premiers_carres(4));
    printf("%d ", somme_n_premiers_pairs(4));
    printf("%d ", somme_n_premiers_impairs(4));
    printf("%d ", somme_n_premiers_pairs_carres(5));
    printf("%d ", toto(10));
    printf("%d ", toto2(10, 4));
    printf("%d ", toto3());
    printf("%d ", toto4(3,5));

    exo17();
    */

    /*
    On n’appelle généralement srand() qu’une fois par
    programme avec comme argument un nombre qui doit
    être différent à chaque exécution si on désire que
    la suite de nombres aléatoires générée ne soit pas
    la même pour toutes les exécutions. La manière la
    plus portable est d’utiliser le résultat de time()
    (défini dans time.h) de la manière suivante :
    */
    srand((unsigned)time(NULL));
    exo18();
}
