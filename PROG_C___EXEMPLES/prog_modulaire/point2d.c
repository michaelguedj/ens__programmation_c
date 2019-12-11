#include <stdio.h>
#include "point2d.h"

void afficher_point2d(Point2D *p)
{
    printf("(%.3f, %.3f) \n", p->x, p->y);
}

Point2D * addition_point2d(Point2D *p1, Point2D *p2)
{
    Point2D *p3 = malloc(sizeof(Point2D));
    p3->x = p1->x + p2->x;
    p3->y = p1->y + p2->y;

    return p3;
}
