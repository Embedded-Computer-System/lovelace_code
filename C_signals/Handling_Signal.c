#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void handle_sigtstp(int sig);
int main()
{
    struct sigaction sa;
    sa.sa_Handler = &handle_sigtstp;

    int x;
    printf("input number\n");
    scanf("%d", &x);
    printf("Result %d * 5\n", x, x * 5);

    return 0;
}
void handle_sigtstp(int sig)
{
    printf("Stop not allowed \n");
}