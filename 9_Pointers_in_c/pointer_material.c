#include <stdio.h>
#include <inttypes.h>

int main()
{
    uint8_t a = 0x42;
    uint8_t *ptr = &a;

    printf("%u\n", *ptr);
    a = 0x56;
    printf("%x\n", *ptr);
    *ptr = 0x78;
    printf("%x\n", *ptr);
    printf("%p\n", &a);

    uint16_t x = 0xBEEF;
    uint16_t *ptr_x = &x;

    printf("x = %x\n", *ptr_x);

    uint32_t a1 = 0x12345678;

    uint8_t *osoitin_byte = &a1;      // 8-bit osoitin
    uint16_t *osoitin_word = &a1;     // 16-bit osoitin
    uint32_t *osoitin_longword = &a1; // 32-bit osoitin

    printf("%x\n", *osoitin_byte);
    printf("%lx\n", *osoitin_word);
    printf("%lx\n", *osoitin_longword);

    uint8_t z = 0x12;
    uint8_t *testptr;
    //= &z;
    printf("size of z %d\n", sizeof(z));
    printf("size of testptr %d\n", sizeof(testptr));

    return 0;
}