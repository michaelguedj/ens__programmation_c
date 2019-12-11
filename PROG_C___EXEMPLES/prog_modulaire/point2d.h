#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED

typedef struct
{
    double x;
    double y;
} Point2D;

void afficher_point2d(Point2D *p);
Point2D * addition_point2d(Point2D *p1, Point2D *p2);

#endif // POINT2D_H_INCLUDED
