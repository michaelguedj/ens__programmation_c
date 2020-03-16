#include <stdio.h>
#include <stdlib.h>

int u(int n)
{
    if (n==0) return 6;
    return u(n-1)+3;
}

int v(int n)
{
    if (n==0) return 20;
    return v(n-1)+5;
}

int w(int n)
{
    if (n==0) return 5000;
    return w(n-1)*2;
}

double x(int n)
{
    if (n==0) return 2;
    return x(n-1)*0.3;
}

int fact(int n)
{
    if (n==0) return 1;
    return n*fact(n-1);
}

int fibo(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}

int succ(int n)
{
    if (n==0) return 1;
    return succ(n-1)+1;
}

double puissance(double a, int n)
{
    if (n==0) return 1;
    return a * puissance(a, n-1);
}

int somme(int n)
{
    if (n==0) return 0;
    return n+somme(n-1);
}

int main()
{
    printf("%f", puissance(3,3));
    return EXIT_SUCCESS;
}
