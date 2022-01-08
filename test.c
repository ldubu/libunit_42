
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int affichage(void);

int main(void) {
    int a = -1;
    int i = 0;

    while (i < 5)
    {
        pid_t c_pid = fork();
        if (c_pid == -1) 
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (c_pid == 0) 
        {
            affichage();
            printf("printed from child process - %d\n", getpid());
            exit(EXIT_SUCCESS);
        } 
        else
        {
            wait(&a);
            printf("printed from parent process - %d\n", getpid());
            wait(NULL);
        }
        printf("test\n");
        i++;
    }   
    exit(EXIT_SUCCESS);
}