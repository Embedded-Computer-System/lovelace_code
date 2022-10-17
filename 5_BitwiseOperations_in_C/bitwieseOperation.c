#include<stdio.h>

int main()
{
    int x = 1;
    int y = 2;
    int val = 3;

    printf("results %d\n",x & y);
    printf("results %d\n",x | y);
    printf("results %d\n",x ^ y);
    printf("results %d\n",~x);
    printf("results %d\n");
    printf("val << 1: %d\n",val<<1);
    printf("val >> 1: %d\n",val>>1);
    printf("1>>3: %d\n",1>>3);
    return 0;
}