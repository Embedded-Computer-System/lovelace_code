#include<stdio.h>
#include<inttypes.h>
#include<math.h>

float light(uint16_t reg);
int main()
{
    uint16_t reg = 0b0110110000110101;

    //0b0110,110000110101
    //  1111,000000000000 &
    //  0110,000000000000
    //>>12 = 0000000000000110 1st_value
    //0b0110110000110101
    //mk 0000111111111111
    //& 0000110000110101
    //>>0 = 0000110000110101 2nd_value
    //light(reg);
    printf("ambient light %f", light(reg));
    return 0;
}

float light(uint16_t reg)
{
    uint16_t mask_1 = 0b1111000000000000;
    uint16_t mask_2 = 0b0000111111111111;

    uint16_t e = ((reg & mask_1) >> 12);
    uint16_t r = ((reg & mask_2) >> 0);

    return 0.01 * pow(2, (float)e) * r;
}