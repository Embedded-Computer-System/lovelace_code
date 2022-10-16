#include<stdio.h>
#include<inttypes.h>

float temperature(uint16_t reg, float factor);
int main()
{
    uint16_t reg = 0b0011001000000000;
    float fuctor = 0.03125;

    float temp = (float)temperature(reg, fuctor);
    printf("%.2f\n", temp);

    return 0;
}

float temperature(uint16_t reg, float factor)
{
    //consider negative values
    return (((uint16_t)reg) >> 2) * factor;

}