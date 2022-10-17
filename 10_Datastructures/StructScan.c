#include <stdio.h>
#include <inttypes.h>

struct mpudata_t
{
    float data[6];
};
// typedef struct mpudata_t values;

void scan(struct mpudata_t mpu, uint8_t index, float threshold);

int main()
{
    struct mpudata_t values = {{1.0, 2.0, 3.0, 4.0, 5.0, 6.0}};

    scan(values, 5, 3.21);

    return 0;
}
void scan(struct mpudata_t mpu, uint8_t index, float threshold)
{
    //char *str;

    if (mpu.data[index] > threshold)
    {
        // printf("..printing out the CSV since with index= %d -> ", index);
        // printf("values[%d]= %.2f which is larger than threshold %.2f:", index, mpu.data[index],
        //        threshold);

        for (uint8_t i = 0; i < 6; i++)
        {
            printf("%.2f", mpu.data[i]);
            if(i <6 -1)
            {
                printf(",");
            }
        }
        printf("\n");
        
        // for (size_t i = 0; i < index; i++)
        // {
        //     /* code */
        // }
        }
    return;
}
