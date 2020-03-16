#include <stdio.h>
#include <math.h>

float f(float x)
{
    if (x<0) return 0;
    else return 1;
}

char g(float x)
{
    if (x<=0) return 'a';
    return 'b';
}

short h(char c)
{
    if (c=='a') return 0;
    if (c=='b') return 1;
    if (c=='c') return 2;
    return 3;
}

short i(double x)
{
    if (x<=0) return 0;
    if (0<=x && x<=100) return 1;
    return 2;
}

double j(double x)
{
    if (-10<x && x<10) return x*x;
    if (50<x && x<60) return pow(x, 3);
    return 1;
}

char k(short n)
{
    if (n==1) return 'a';
    if (n==2) return 'b';
    if (n==3) return 'c';
    return '_';
}

short l(short x, short y)
{
    if (x+y==1) return 1;
    if (x<y) return 2;
    return 0;
}

short m(char c)
{
    if (c=='h') return 1;
    if (c=='b') return 2;
    if (c=='d') return 3;
    if (c=='h') return 4;
    return 5;
}

short n(double x, double y)
{
    if (x==y) return 1;
    return 0;
}

short o(char a, char b)
{
    if (a==b) return 1;
    return 0;
}

short p(float a, float b, float c)
{
    return a==b && b==c;
}

short q(int x, int y, int z)
{
    if (x>y && x>z) return 1;
    if (y>x && y>z) return 2;
    if (z>x && z>y) return 3;
    return 0;
}

float r(int x, int y, int z)
{
    if (x!=0) return (y+z)/x;
    if (y!=0) return (x+z)/y;
    if (z!=0) return (x+y)/z;
    return 0;
}

float s(int x, int y, int z)
{
    if (x!=0) return pow(x,4)+(pow(x,3)+pow(z,5))/x;
    if (y!=0) return pow(y,4)+(pow(x,3)+pow(z,5))/y;
    if (z!=0) return pow(z,4)+(pow(x,3)+pow(z,5))/z;
    return 0;
}

void main()
{
    printf("f(0)=%f \n", f(0));
    printf("g(0)=%c \n", g(0));
    printf("h('a')=%f \n", h('a'));
    printf("i(0)=%d \n", i(0));
    printf("j(0)=%f \n", j(0));
    printf("k(1)=%c \n", k(1));
    printf("l(0,0)=%d \n", l(0,0));
    printf("m('h')=%f \n", m('h'));
    printf("n(0,0)=%f \n", n(0,0));
    printf("o('a','b')=%d \n", o('a','b'));
    printf("p(0,0,0)=%d \n", p(0,0,0));
    printf("q(1,2,3)=%d \n", q(1,2,3));
    printf("r(1,2,3)=%f \n", r(1,2,3));
    printf("s(1,2,3)=%f \n", s(1,2,3));
}
