#include <stdio.h>
#include <inttypes.h>
#include <string.h>

int main()
{
    char str[] = "1234567890,temperature,27,C";
    const char sep[] = ","; // delimiter string
    char *token;            //
    token = strtok(str, sep);

    // Erota silmukassa loput osat
    while (token != NULL)
    {
        printf("%s\n", token);

        // Funktio uudelleen, jatketaan paikkamerkistä
        token = strtok(NULL, sep);

    }
    return 0;
}