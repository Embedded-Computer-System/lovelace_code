#include <stdio.h>
#include <math.h>

const double PI = 3.1416;

double calculate_square_area(double side);
double calculate_triangle_area(double side);
double calculate_sector_area(double radius, double angle);
double calculate_cathetus_length(double hypotenuse);
double calculate_figure_area(double x);

int main() {
    double x = 32.495;

    printf("The area of the figure, when x is %f, is: %f\n", calculate_figure_area(x));
    return 0;
}

double calculate_square_area(double side) {
    return pow(side, 2);
}

double calculate_triangle_area(double side) {
    return pow(side, 2) / 2;
}
    
double calculate_sector_area(double radius, double angle) {
    return PI * pow(radius, 2) * angle / 360;
}
     
double calculate_cathetus_length(double hypotenuse) {
    return hypotenuse / sqrt(2);
}

double calculate_figure_area(double x) {
    double square_1_area, square_2_area, triangle_area, sector_1_area, sector_2_area, triangle_side;
    square_1_area = calculate_square_area(x);
    triangle_side = calculate_cathetus_length(x);
    triangle_area = calculate_triangle_area(triangle_side);
    square_2_area = calculate_square_area(triangle_side * 2);
    sector_1_area = calculate_sector_area(triangle_side, 45);
    sector_2_area = calculate_sector_area(triangle_side , 2);
    return square_1_area + square_2_area + triangle_area + sector_1_area + sector_2_area;
}

