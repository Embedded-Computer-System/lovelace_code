// print 18 byte char in CSV (12.00,1.00,)
#include <stdio.h>
#include <inttypes.h>

int main()
{
    char *str;

    // unsigned short int x; // light
    // double y;             // press
    // unsigned int z;       // time

    int64_t x; // humid
    int y;     // light
    double z = 8;  // press

    sprintf(str, "%05.2f,%05.2f,%05.2f", x, y, z);
    printf("%s", str);

    sprintf(str, "humid:%ld,light:%d,press:%.4f", x, y, z);

    return 0;
}