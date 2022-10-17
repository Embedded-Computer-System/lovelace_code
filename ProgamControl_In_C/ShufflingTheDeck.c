#include<stdio.h>
//#include <inttypes.h>
#include<stdint.h>
#include<stdlib.h>
#include<time.h>

void shuffle(uint8_t *list, uint16_t list_size);

int main()
{
    uint8_t deck[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("before suffling\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%u ", deck[i]);
    }
    printf("\n");

    shuffle(deck, 8);
    printf("after suffling\n");

    for (int i = 0; i < 8; i++)
    {
      printf("deck[%u] %d\n",i, deck[i]);  
    }
    printf("\n");

    
    return 0;
}

void shuffle(uint8_t *list, uint16_t list_size)
{
    srand((unsigned)time(NULL));
    for (uint16_t i = 0; i < list_size; i++)
    {
        uint16_t swap_index = rand() % list_size;
        uint8_t temp = list[i];
        
        list[i] = list[swap_index];
        list[swap_index] = temp;

    }
    
}