#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef unsigned short Octet[8];


void afficher(Octet o)
{
    int i;
    printf("\n");
    for(i=0; i<8; i++)
    {
        printf("%d ", o[i]);
    }
    printf("\n");
}

int zero(Octet o)
{
    int i;
    for(i=0; i<8; i++)
    {
        if (o[i] != 0) return 0;
    }
    return 1;
}

int negatif(Octet o)
{
    return o[0] == 1;
}

int pair(Octet o)
{
    return o[7] == 0;
}

int egaux(Octet o1, Octet o2)
{
    int i;
    for(i=0; i<8; i++)
    {
        if (o1[i] != o2[i]) return 0;
    }
    return 1;
}

int en_decimal(Octet o)
{
    int i;
    int res=0;
    for(i=7; i>=1; i--)
    {
        res += o[i] * pow(2, 7-i);
    }
    res -= ( o[0] * pow(2, 7) );
    return res;
}


//--
void miroir(Octet o)
{
    int i;
    for(i=0; i<8; i++)
    {
        if (o[i] == 1) printf("0 ");
        else printf("1 ");
    }
    printf("\n");
}

void test(Octet o)
{
    afficher(o);
    printf("  en decimal -> %d \n", en_decimal(o));
    printf("  zero ? -> %d \n", zero(o));
    printf("  negatif ? -> %d \n", negatif(o));
    printf("  pair ? -> %d \n", pair(o));

    printf("\n");
}

int main()
{
    Octet o0 = {0, 0, 0, 0, 0, 0, 0, 0};
    Octet o1 = {1, 0, 0, 1, 1, 0, 0, 1};
    Octet o2 = {0, 0, 1, 1, 1, 0, 0, 1};

    test(o0);
    test(o1);
    test(o2);

    printf("egaux o1 an o2 ? %d\n", egaux(o1, o2));
    printf("egaux o2 an o2 ? %d\n", egaux(o2, o2));

    return EXIT_SUCCESS;
}
