#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef struct
{
    double re;
    double im;
} Complexe;


void affichage(Complexe z)
{
    printf("%f + (%f).i \n\n", z.re, z.im);
}

Complexe somme(Complexe z1, Complexe z2)
{
    Complexe res;
    res.re = z1.re + z2.re;
    res.im = z1.im + z2.im;
    return res;
}

Complexe oppose(Complexe z)
{
    Complexe res;
    res.re = -z.re;
    res.im = -z.im;
    return res;
}

int p_imaginaire_pur(Complexe z)
{
    return z.re == 0;
}

Complexe conjugue(Complexe z)
{
    Complexe res;
    res.re = z.re;
    res.im = -z.im;
    return res;
}

double module(Complexe z)
{
    return sqrt(z.re*z.re + z.im*z.im);
}

Complexe multiplication(Complexe z1, Complexe z2)
{
    Complexe res;
    res.re = z1.re*z2.re - z1.im*z2.im;
    res.im = z1.re*z2.im - z2.re*z1.im;
    return res;
}

void main()
{
    Complexe z1, z2, z3;
    z1.re = 1;
    z1.im = 2;
    z2.re = -1;
    z2.im = 3;
    affichage(z1);
    affichage(z2);

    printf("somme\n");
    affichage(somme(z1,z2));

    printf("oppose\n");
    affichage(oppose(z1));

    printf("conjugue\n");
    affichage(conjugue(z1));

    printf("multiplication\n");
    affichage(multiplication(z1, z2));
    z3 = multiplication(z1, z2);
    affichage(z3);

    return EXIT_SUCCESS;
}
