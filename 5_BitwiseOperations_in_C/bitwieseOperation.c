// Use 1 byte(8bits) to represent 8 flags
#include<stdio.h>
#include<inttypes.h>

#define BIN_LED0 0x01//0b01
#define BIN_LED1 0x10//0b10
#define BIN_LED2 0x80 //0b10000000
#define BIN_LED6 0x60 //0b00100000


int main()
{
    uint8_t features = BIN_LED0 | BIN_LED1 | BIN_LED2 |BIN_LED6;
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

    // to disable a feature
    //100000011
    //000000010 ~(NOT) 2nd /mask
    //111111101
    //100000001 second feature disabled
    //000000010 enable again |BIN_LED2
    //100000011


    features = features & (~BIN_LED2);
    features = features | BIN_LED2;

    // check if y is enabled
    if ((features & BIN_LED0))
    {
        printf("1st LED is enabled\n");
    }
    if ((features & BIN_LED1))
    {
        printf("2nd LED is enabled\n");
    }
    if ((features & BIN_LED2))
    {
        printf("3nd LED is enabled\n");
    }

    features = features & (~BIN_LED6); // disable pin 6
    features = features | BIN_LED6;
    if ((features & BIN_LED6))
    {
        printf("6th LED is enabled\n");
    }

    return 0;
}