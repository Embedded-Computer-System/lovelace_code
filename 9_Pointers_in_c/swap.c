#include <stdio.h>
#include<inttypes.h>


void vaihda(int8_t *local_a, int8_t *local_b); // prototyyppi

int main() {
   int8_t a = 14;
   int8_t b = 68;
   printf("Ennen: a=%d ja b=%d\n", a, b);
   vaihda(&a, &b);
   printf("Jälkeen: a=%d ja b=%d\n", a, b);
}

void vaihda(int8_t *local_a, int8_t *local_b) {
   int8_t temp = *local_a;
   *local_a = *local_b;
   *local_b = temp;
}