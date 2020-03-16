#include <stdio.h>

int afficher(int *t, int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%d ", t[i]);
}

int maximum(int *t, int n)
{
    int i, max=t[0];
    for (i=1; i<n; i++)
        if (t[i] > max)
            max=t[i];
    return max;
}

int somme(int *t, int n)
{
    int i, res=0;
    for (i=0; i<n; i++)
        res += t[i];
    return res;
}

float moyenne(int *t, int n)
{
    return ((float) somme(t, n))/n;
}

short tous_egaux(int *t, int n)
{
    int i, x=t[0];
    for (i=1; i<n; i++)
        if (t[i] != x) return 0; // Faux
    return 1; // Vrai
}

int produit_scalaire(int *t1, int *t2, int n)
{
    int i, res=0;
    for (i=0; i<n; i++)
        res += t1[i]*t2[i];
    return res;
}

int egaux(int *t1, int *t2, int n)
{
    int i;
    for (i=0; i<n; i++)
        if (t1[i] != t2[i]) return 0; // Faux
    return 1; // Vrai
}

int est_trie(int *t, int n)
{
    int i;
    for (i=0; i<=n-2; i++)
        if (t[i] > t[i+1]) return 0; // Faux
    return 1; // Vrai
}

void main()
{
    int t1[5] = {1,2,3,4,4};
    int t2[5] = {3,3,3,3,3};
    int t3[5] = {3,3,1,3,3};

    //afficher(t1, 5);
    //printf("%d", maximum(t1, 5));
    //printf("%d", somme(t1, 5));
    //printf("%f", moyenne(t1, 5));

    //printf("%d ", tous_egaux(t1, 5));
    //printf("%d ", tous_egaux(t2, 5));

    //printf("%d ", produit_scalaire(t1, t2, 5));
    //printf("%d ", produit_scalaire(t2, t1, 5));

    //printf("%d ", egaux(t1, t2, 5));
    //printf("%d ", egaux(t1, t1, 5));

    printf("%d ", est_trie(t1, 5));
    printf("%d ", est_trie(t2, 5));
    printf("%d ", est_trie(t3, 5));
}
