#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x+1;
}

float g(float x)
{
    return 2*x + 3;
}

float h(float x)
{
    return x*x + 1;
}

float i(float x)
{
    return 5*x*x + 3*x + 1;
}

float j(float x)
{
    return 3*pow(x, 3) + 5*x*x + 3*x + 4;
}

float k(float x)
{
    return pow(x, 10) - pow(x, 3) + 3;
}

float l(float x)
{
    return 3*pow(x, 10) + 4*x*x + 5;
}

float m(float x)
{
    return 10*pow(x, 100) + 3*x + 1;
}


int a(float x)
{
    return x+3;
}

int b(float x)
{
    return x*x - 2;
}

float n(float x)
{
    return a(x) + b(x);
}

float c(float x)
{
    return x+1;
}

float d(float x)
{
    return x*x*x;
}

float o(float x)
{
    return c(d(x));
}

float p1(float x)
{
    return 3*x*x*x + 2;
}

float p2(float x)
{
    return 20*x*x + 1;
}

float p(float x)
{
    return p1(x)/p2(x);
}

void main()
{
    printf("%f \n", f(0));
    printf("%f \n", g(1));
    printf("%f \n", h(2));
    printf("%f \n", i(1));
    printf("%f \n", j(1));
    printf("%f \n", k(1));
    printf("%f \n", l(1));
    printf("%f \n", m(1));
    printf("%f \n", n(1));
    printf("%f \n", o(1));
    printf("%f \n", p(1));
}

