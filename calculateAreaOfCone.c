#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double kartion_tilavuus(double radius, double height);

int main()
{
    double radius = 7;
    double height = 5;
    double results = 0;

    results = kartion_tilavuus(radius, height);

    printf("%lf\n", results);

    return 0;
}

double kartion_tilavuus(double radius, double height)
{
double volume = (M_PI * (radius * radius) * height)/3;
return volume;
}
