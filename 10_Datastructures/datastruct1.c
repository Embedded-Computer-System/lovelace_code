#include<stdio.h>
#include <stdint.h>

struct mpudata_t {
    float data[6];
};

void tarkistus(struct mpudata_t mpu, uint8_t index, float threshold);

int main()
{
    struct mpudata_t mpu = { { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 } };
    uint8_t index = 5;
    uint8_t threshold = 3.12;

    tarkistus(mpu, index, threshold);

    return 0;
}
void tarkistus(struct mpudata_t mpu, uint8_t index, float threshold)
{
    
    if(mpu.data[index] > threshold)
    {
        

    }
}