#include<stdio.h>

int main()
{
    unsigned int flags = 6;
    if((flags & 1<<3) != 0)
    {
        printf("1st feature is enabled\n");
    }

    return 0;
}