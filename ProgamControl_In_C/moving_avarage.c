// simple moving avarage

#include<stdio.h>
#include<inttypes.h>

void movavg(float *array, uint8_t array_size, uint8_t window_size);

int main()
{
    float data[5] = { 1.0, 2.0, 4.0, 6.0, 9.0 };

    movavg(data, 5, 3);

    printf("printf\n");
    return 0;

}
void movavg(float *array, uint8_t array_size, uint8_t window_size)
{
    float *ptr = array;

    float avarage = 0;
    float sum = 0;

    for (uint8_t i = 0; i < array_size; i++)
    {
        sum += array[i];
    }
        
    printf("sum %f  %f", sum, *(ptr + 4));
}