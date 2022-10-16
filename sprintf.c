#include <stdio.h>
//#define _USE_MATH_DEFINES
#include <math.h>




int main()
{
    char str[80];
    
    //sprintf(str, "Value of Pi = %f", M_PI);


    sprintf(str, "Value of M_PI %.2f", 2.9);
    printf("%s", str);

    return 0;
}

