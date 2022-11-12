#include <stdio.h>
#include <inttypes.h>

#define MASK3 ((1 << 5) | (1 << 1))
int main()
{
    int8_t x = 16;
    x >>= 3;  //<< multiply by 2 and >> divede by 2

    printf("%d\n",x);
    // 168421
    // 10000

    int16_t lcd; 
    lcd >>= 3;
    printf("lcd %d\n", lcd);

    uint8_t  x1 = 0b00001111;
    uint8_t x2 = -85; // 0b10101010;
    printf("x1 & x2 %d\n", x1&x2);
    printf("x1 | x2 %d\n", x1|x2);
    printf("x1 ^ x2 %d\n", x1^x2);
    printf("~x1 %d\n", ~x1);
    printf("~x2 %d\n", ~x2);

    // bit masking
    //uint8_t mask = 0x22; // 34
    uint8_t mymask1 = 0b00100000;
    uint8_t mymask2 = 0b00000010;
    uint8_t mask = mymask1 | mymask2;
    printf("mask %d\n", mask);
    // create mask
    uint8_t mask2 = 1;
    mask2 = (mask2 << 5) | (mask2 << 1);
    printf("mask2 %d\nmask3 %d\n", mask2, MASK3);

    // check operator precedence in c
    uint8_t lcd_val = 0b11111111;
    uint8_t MASK_E_VAL = 0b00000100;
    
    lcd_val = lcd_val & ~(MASK_E_VAL);
    printf("lcd_val %d\n", lcd_val);
    
    return 0;
}