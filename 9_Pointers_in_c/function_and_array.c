#include<stdio.h>
#include<inttypes.h>
#include<string.h>

void send_radio_message(char viesti[2048], uint16_t array_size);

int main()
{
    char message_to_home[2048] = "kkdkdkkdk kkdkdk dk d, d.... ??++";
    printf("strlen %d\n", strlen(message_to_home));

    send_radio_message(message_to_home, 2048);

    return 0;
}

void send_radio_message(char viesti[2048], uint16_t array_size)
{
    uint16_t i = 0;
    for ( i = 0; i < array_size; i++)
    {
        printf("%c", viesti[i]);
    }
    printf("\n");
}