#include<stdio.h>
#include<inttypes.h>

struct point
{
    double x, y;
};
typedef struct point Point; 

Point* getMidPoint(const Point *a, const Point *b)
{
    Point m;
    m.x = (a->x + b->x)/2;
    m.y = (a->y + b->y)/2;
    return &m;
}

int main()
{
    Point p1 = {p1.x = 1, p1.y = 1};
    Point p2 = {p2.x = 3, p2.y = 2};

    Point mid;
    mid = getMidPoint(&p1, &p2);
    printf("%lf, %lf\n", mid.x, mid.y);   

    return 0;
}