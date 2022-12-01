#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<unistd.h>


int main()
{
    int randNum = 0;
    int *goodPtr = malloc(sizeof(int));
    int *badPtr = NULL;
    srand(time(NULL));

    while(true)
    {
        randNum = rand() % 255;
        if(randNum == 13)
        {
            *badPtr = randNum;

        }else
        {
            *goodPtr = randNum;
        }
         printf("randNum: %d\n", randNum);
         usleep(100);
        
    }
    
   
   

    return 0;
}