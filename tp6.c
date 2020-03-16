#include <stdio.h>

void afficher(char *t, int n)
{
    int i=0;
    for (i=0; i<n; i++)
        printf("%c ", t[i]);
}

void afficher_a(char *t, int n, int a)
{
    if (0<=a && a<=n-1)
        printf("%c ", t[a]);
}

void afficher_a_b(char *t, int n, int a, int b)
{
    int i;
    if (0<=a && a<=n-1 && 0<=a && a<=n-1)
        if (a<=b)
            for (i=a; i<=b; i++)
                printf("%c ", t[i]);
}

void concatener(char *t, int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%c", t[i]);
}

short appartient(char *t, int n, char x)
{
    int i;
    for (i=0; i<n; i++)
        if (t[i]==x)
            return 1;
    return 0;
}

short non_appartient(char *t, int n, char x)
{
    return !appartient(t, n, x);
}

short appartient2(char *t1, char *t2, int n, char x)
{
    return appartient(t1, n, x) && appartient(t2, n, x);
}

short appartient3(char *t1, char *t2, int n, char x)
{
    return appartient(t1, n, x) && non_appartient(t2, n, x);
}

short appartient4(char *t1, char *t2, char *t3, int n, char x)
{
    return appartient(t1, n, x) &&
           (appartient(t2, n, x) || appartient(t3, n, x));
}

void main()
{
    char t[5] = {'a', 'b', 'c', 'd', 'e'};
    char t2[5] = {'a', 'a', 'a', 'b', 'b'};
    char t3[5] = {'e', 'e', 'e', 'e', 'e'};

    //afficher(t, 5);
    //afficher_a(t, 5, 3);
    //afficher_a_b(t, 5, 1, 3);
    //concatener(t, 5);
    //printf("%d ", appartient(t, 5, 'c'));

    //printf("%d ", appartient2(t, t2, 5, 'c'));
    //printf("%d ", appartient2(t, t2, 5, 'b'));

    //printf("%d ", appartient3(t, t2, 5, 'c'));
    //printf("%d ", appartient3(t, t2, 5, 'b'));

    printf("%d ", appartient4(t, t2, t3, 5, 'e'));
    printf("%d ", appartient4(t, t2, t3, 5, 'c'));
}
