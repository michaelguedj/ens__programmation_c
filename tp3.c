#include <stdio.h>
#include <math.h>
#include <string.h>

void afficher_arguments(int a, char b, float c)
{
    printf("%d %c %f \n", a, b, c);
}

void egaux()
{
    char ch1[30], ch2[30];
    printf("ch1 : ");
    scanf("%s", &ch1);
    printf("ch2 : ");
    scanf("%s", &ch2);
    if (strcmp(ch1, ch2) == 0) // ch1=ch2
        printf("OK \n");
    else printf("KO \n");
}

void etes_vous_toto()
{
    char ch[30];
    printf("ch : ");
    scanf("%s", &ch);
    if (strcmp(ch, "Toto") == 0) // ch="Toto"
        printf("Vous etes Toto.\n");
    else printf("Vous n'etes pas Toto.\n");
}

void etes_vous_toto2()
{
    char ch[30];
    printf("ch : ");
    scanf("%s", &ch);
    if ((strcmp(ch, "Toto") == 0) ||
            strcmp(ch, "toto") == 0) // ch="Toto" ou ch="toto"
        printf("Vous etes Toto.\n");
    else printf("Vous n'etes pas Toto.\n");
}

void etes_vous_untel(char *untel)
{
    char ch[30];
    printf("ch : ");
    scanf("%s", &ch);
    if (strcmp(ch, untel) == 0) // ch=untel
        printf("Vous etes %s.\n", untel);
    else printf("Vous n'etes pas %s.\n", untel);
}

void qui_etes_vous()
{
    char nom[30], prenom[30];
    int age;
    printf("Nom : ");
    scanf("%s", &nom);
    printf("Prenom : ");
    scanf("%s", &prenom);
    printf("Age : ");
    scanf("%d", &age);
    printf("Vous etes %s %s et vous avez %d ans.\n", prenom, nom, age);
}

void qui_est_plus_grand(int a, int b)
{
    if (a==b) printf("%d et %d sont egaux.\n", a, b);
    else if (a>b) printf("%d est plus grand que %d.\n", a, b);
    else printf("%d est plus grand que %d.\n", b, a);
}

void quelle_heure()
{
    int h;
    printf("Heure :");
    scanf("%d", &h);
    if ( h<0 || h>=24) printf("Je vous demande pardon ?");
    else if (0<=h && h<5) printf("Il faut dormir !");
    else if (5<=h && h<12) printf("Bon matin !");
    else if (12<=h && h<14) printf("Bon appetit !");
    else if (14<=h && h<18) printf("Bon apres-midi !");
    else if (18<=h && h<21) printf("Bon soir !");
    else if (21<=h && h<24) printf("Bonne nuit !");

    printf("\n");
}

void calculette()
{
    float x,y,res;
    char op;
    printf("x : ");
    scanf("%f", &x);
    printf("op : ");
    scanf(" %c", &op);
    printf("y : ");
    scanf("%f", &y);

    if (op=='+') res=x+y;
    else if (op=='-') res=x-y;
    else if (op=='*') res=x*y;
    else if (op=='/') res=x/y;
    else
    {
        printf("Operateur inconnu !");
        return;
    }

    printf("%f %c %f = %f", x, op, y, res);
}

void main()
{
    afficher_arguments(1, 'a', 3.2);
    egaux();
    etes_vous_toto();
    etes_vous_toto2();
    etes_vous_untel("Tata");
    qui_etes_vous();

    qui_est_plus_grand(1,1);
    qui_est_plus_grand(1,2);
    qui_est_plus_grand(2,1);

    quelle_heure();

    calculette();
}
