#include<stdio.h>
#include<inttypes.h>

typedef unsigned long long UINT64;
typedef uint32_t PIN_Config;
#define A 0b001
#define B 0b010
#define C 0b100


int main()
{
    UINT64 l = 14;
    PIN_Config buttonConfig = {A|B|C};

   // printf("%llu\n", l);
    printf("%u\n", buttonConfig);
    

   

    return 0;
}