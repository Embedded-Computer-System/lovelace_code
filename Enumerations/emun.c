#include<stdio.h>

typedef enum Color{RED = 1, BLUE, YELLOW}Color;
//typedef  enum Color Color;
Color myColor = RED;

int main()
{
    if(myColor == RED)
    myColor = BLUE;

    printf("%d\n", myColor);

    return 0;
}