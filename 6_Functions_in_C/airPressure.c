#include<stdio.h>
#include<inttypes.h>

uint32_t pressure(uint8_t xlsb, uint8_t lsb, uint8_t msb);

int main()
{
    uint8_t xlsb = 0b11011110;
    uint8_t lsb = 0b10111100;
    uint8_t msb = 0b00011000;

    //0b11011110
    // (uint32_t)0b11011110
    //xlsb = 0b00000000000000000000000011011110
    // lsb  =(uint32_t)0b10111100;
    // lsb  = 0b00000000000000000000000010111100;
    // msb = (uint32_t)0b00011000;
    // msb = 0b00000000000000000000000000011000;

    // (xlsb >> 4)= 0b000000000000,00000000,00000000,1101
    //(lsb << 4)  = 0b000000000000,00000000,10111100,0000;
    //(msb << 12) = 0b000000000000,00011000,00000000,0000;
    // OR           0b000000000000,00011000,10111100,1101;
    printf("%u", pressure(xlsb, lsb, msb));

    return 0;
}

uint32_t pressure(uint8_t xlsb, uint8_t lsb, uint8_t msb)
{
    uint32_t xls_32 = ((uint32_t)xlsb) >> 4;
    uint32_t lsb_32 = ((uint32_t)lsb) << 4;
    uint32_t msb_32 = ((uint32_t)msb) << 12;

    return msb_32 | lsb_32 | xls_32;
}