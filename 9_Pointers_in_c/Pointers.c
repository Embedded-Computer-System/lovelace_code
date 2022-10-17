#include<stdio.h>
#include <stdint.h>

void write_sensors(char *str, float ax, float ay, float az, float press, float temp);
int main()
{
   char str;
   int16_t ax = 0.2536;
   int16_t ay = -5.3272;
   int16_t az = -1.3277776;
   int press = 101325.273261;
   int temp = 27.721667;

   write_sensors(str, ax, ay, az, press, temp);
   //printf("%s", str);
}

void write_sensors(char *str, float ax, float ay, float az, float press, float temp)
{
    //{ax, ay, az, press, temp};
    
}