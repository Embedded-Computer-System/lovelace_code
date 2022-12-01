#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>

struct point
{
    double x, y;
};
typedef struct point Point; 

void getMidPoint(const Point *a, const Point *b, Point* out)
{
   //Point *m = malloc(sizeof(Point));
    out->x = (a->x + b->x)/2;
    out->y = (a->y + b->y)/2;
    
}

int main()
{
    Point p1 = {p1.x = 1, p1.y = 1};
    Point p2 = {p2.x = 3, p2.y = 2};

    Point mid;
    getMidPoint(&p1, &p2, &mid);
    printf("%lf, %lf\n", mid.x, mid.y);
    

    return 0;
}