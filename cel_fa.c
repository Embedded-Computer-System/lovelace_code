#include <stdio.h>
int main()
{
    float c1= 5;
    float c2 = 9;
	float c3 = 32;
    float fah = 212.0;
    //printf("5/9 %.2f\n", ((float)5/9 * (fah-c3)));
    float cent = ((float)c1/c2 * (fah-c3));
    printf ("%.2f Fahrenheit are %.2f Centigrades",fah, cent);



    return 0;
}