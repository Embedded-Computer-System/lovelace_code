
#include<stdio.h>
#include<inttypes.h>
#include<math.h>

float humidity(uint16_t reg);
int main()
{
    uint16_t reg = 0b1000000000000000;

    printf("%.1f%%", humidity(reg));

    return 0;
}

float humidity(uint16_t reg)
{

    return ((float)reg) / pow(2, 16) * 100.0f;
}