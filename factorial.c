#include <stdio.h>
//#include<stdint.h>
#include <inttypes.h>
int64_t factorial(int8_t n);

// int main()
// {
//     // factorial 20!
//     int8_t num;
//     printf("enter an number\n");
//     scanf("%ld", &num);
//     int64_t result = factorial(num);

//     printf("n! %lld", result);

//     return 0;
// }

int64_t factorial(int8_t n)
{
    
    if(n > 20)
    {
        return -1;
    }
    else if(n == 0)
    {
        return 1;
    }
    else
    {
      return n * factorial(n - 1);  
    }
    
}
