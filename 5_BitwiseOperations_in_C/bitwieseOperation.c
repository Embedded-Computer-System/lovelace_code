#include<stdio.h>
#include<inttypes.h>

#define BIN_LED0 0b01
#define BIN_LED1 0b10
#define BIN_LED2 0b10000000

int main()
{
    uint8_t features = BIN_LED0 | BIN_LED1 | BIN_LED2;
    //0000000001 
    //0000000011
    //1000000000
    //1000000011 |(OR)

    //1000000011 = 8 features
    //1000000000 &
    //1          !=0
    //0000000010 &
    //0000000010
    //0000000010 !=0

    // check if y is enabled
    if ((features & BIN_LED0) != 0)
    {
        printf("1st LED is enabled\n");
    }
    if ((features & BIN_LED1) != 0)
    {
        printf("2nd LED is enabled\n");
    }
    if ((features & BIN_LED2) != 0)
    {
        printf("3nd LED is enabled\n");
    }


    return 0;
}