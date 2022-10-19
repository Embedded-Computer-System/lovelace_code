#include <stdio.h>
#include <inttypes.h>

int main()
{
    printf("Pointer dose not care about the variable type\n");
    char str[] = "FIN - Ken";
    char *ptr = str;

    for (ptr = str; *ptr != 0; ptr++)
    {
        printf("%c", *ptr);
    }

    printf("\nPointer printing integer variable type\n");

    int elements[] = {1, 2, 3, 4, 5, 6};
    int *ptr_el = elements;
    for (ptr_el = elements; *ptr_el != 0; ptr_el++)
    {
        printf("%d", *ptr_el);
    }
    printf("\n");

    uint16_t taulukko[] = {0x1234, 0x5678, 0x9ABC};
    uint16_t *ptr_t = taulukko;

    for (ptr_t = taulukko; *ptr_t != 0; ptr_t++)
    {
        printf("%lx ", *ptr_t);
    }

    printf("\n");

    uint16_t array[] = {0x1234, 0x5678, 0x9ABC};
    uint16_t *ptr_a = array;

    for (ptr_a = array; *ptr_a != 0; ptr_a++)
    {
        printf("%lx ", *ptr_a);
    }
    return 0;
}
