#include<stdio.h>
//#include <inttypes.h>
#include<stdint.h>
#include<stdlib.h>
#include<time.h>

void shuffle(uint8_t *list, uint16_t list_size);

int main()
{
    int8_t num = 5;
    printf("Enter\n");
    scanf("%d", &num);

    srand((unsigned)time(NULL));

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", rand() % 50);
    }
    
    return 0;
}

void shuffle(uint8_t *list, uint16_t list_size)
{

}