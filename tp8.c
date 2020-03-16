#include <stdio.h>
#include <stdlib.h>

void afficher1(char *s)
{
    int i=0;
    while (s[i] != '\0')
    {
        printf("%c", s[i]);
        i++;
    }
    fflush(stdout);
    printf("\n");
}

void afficher2(char *s)
{
    printf("%s\n", s);
}

int taille(char *s)
{
    int i=0;
    while (s[i] != '\0')
        i++;
    return i;
}

char * concatener(char *tab, int n)
{
    int i=0;
    ///char res[n+1]; <== NE FONCTIONNE PAS !!!
    char *res = (char *) malloc(sizeof(char)*(n+1));
    while (i<n)
    {
        res[i] = tab[i];
        i++;
    }
    res[i] = '\0';
    return res;
}

int appartient(char *ch, char c)
{
    int i=0;
    while (ch[i] != '\0')
    {
        if (ch[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int nb_occurrences(char *ch, char c)
{
    int i=0, res=0;
    while (ch[i] != '\0')
    {
        if (ch[i] == c)
            res++;
        i++;
    }
    return res;
}

int egalite(char *ch1, char *ch2)
{
    int i=0;
    while (ch1[i]!= '\0' && ch2[i]!= '\0')
    {
        if (ch1[i] != ch2[i])
            return 0;
        i++;
    }
    if (ch1[i]!='\0' || ch2[i]!='\0')
        return 0;
    return 1;
}

char * concatener_egalite(char *tab, int n, char *ch)
{
    return egalite(concatener(tab, n), ch);
}

char * remplacer(char *ch, char x, char y)
{
    int i=0;
    char *res = (char *) malloc(sizeof(char)*taille(ch));
    while (ch[i] != '\0')
    {
        if (ch[i] == x)
            res[i] = y;
        else
            res[i] = ch[i];
        i++;
    }
    res[i] = '\0';
    return res;
}

char * sans_espace(char *ch)
{
    int i=0, j=0;
    char *res = (char *) malloc(sizeof(char)*taille(ch));
    while (ch[i] != '\0')
    {
        if (ch[i] != ' ')
        {
            res[j] = ch[i];
            j++;
        }
        i++;
    }
    res[j] = '\0';
    return res;
}

int present(char **tab, int n, char c)
{
    int i;
    for (i=0; i<n; i++)
        if (appartient(tab[i], c))
            return 1;
    return 0;
}

int main()
{
    char ch1[] = "abcd";
    char ch2[] = "";
    char tab[7] = {'b', 'o', 'n', 'j', 'o', 'u', 'r'};
    char ch3[] = "abccdc";
    char tab2[4] = {'a', 'b', 'c', 'd'};

    char *tab3[3] = {"abc", "aabaac", "dddbdd"};

    //afficher1(ch1);
    //afficher1(ch2);
    //afficher2(ch1);
    //afficher2(ch2);

    //printf("%d ", taille(ch1));
    //printf("%d ", taille(ch2));

    //afficher1(concatener(tab, 7));
    //afficher2(concatener(tab, 7));

    //printf("%d", appartient(ch1, 'c'));
    //printf("%d", appartient(ch1, 'e'));
    //printf("%d", appartient(ch2, 'd'));

    //printf("%d", nb_occurrences(ch1, 'a'));
    //printf("%d", nb_occurrences(ch3, 'c'));

    //printf("%d ", egalite(ch1, ch1));
    //printf("%d ", egalite(ch3, ch1));

    //printf("%d ", concatener_egalite(tab2, 4, ch1));
    //printf("%d ", concatener_egalite(tab, 7, ch1));

    //afficher1(remplacer("aaa bb aa bbb", 'a', 'c'));
    //afficher2(remplacer("aaa bb aa bbb", 'a', 'c'));

    //afficher1(sans_espace("aaa bb aa bbb"));
    //afficher2(sans_espace("aaa bb aa bbb"));

    printf("%d ", present(tab3, 3, 'c'));
    printf("%d ", present(tab3, 3, 'd'));
    printf("%d ", present(tab3, 3, 'e'));

    return EXIT_SUCCESS;
}
