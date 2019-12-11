#include <stdio.h>
#include <stdlib.h>
#include "point2d.h"

int main()
{
    Point2D *p1, *p2, *p3;
    p1 = malloc(sizeof(Point2D));
    p2 = malloc(sizeof(Point2D));

    p1->x = 1.0;
    p1->y = 2.5;

    p2->x = 11.1;
    p2->y = 1.1;

    afficher_point2d(p1);
    afficher_point2d(p2);

    p3 = addition_point2d(p1, p2);
    afficher_point2d(p3);

    free(p1);
    free(p2);
    free(p3);
    return EXIT_SUCCESS;
}
