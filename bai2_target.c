#include <stdio.h>
#include <unistd.h>

int main()
{   
    int i;
    printf ("PID: %d\n", (int)getpid());
    for(i = 0; i < 10; i++) 
        {
        printf("Welcome to VCS\n");
        sleep(2);
    }
    getchar();

    return 0;
}