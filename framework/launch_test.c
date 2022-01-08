#include "./framework/framework.h"

#include <sys/wait.h>


int launch_test(t_unit_test **testlist, char *function_name) 
{
    int a = -1;
    
    while (*testlist)
    {
        pid_t c_pid = fork();
        if (c_pid == -1) 
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (c_pid == 0) 
        {
            //printf("printed from child process - %d\n", getpid());
            int l = (*testlist)->f();
            exit(l);
        } 
        else
        {
            wait(&a);
            int result = read_signal(a);
            ft_output(testlist, result, function_name);
            //printf("printed from parent process - %d\n", getpid());
            wait(NULL);
        }
        //printf("test\n");
        //(*testlist)=(*testlist)->next;
    }   
    exit(EXIT_SUCCESS);
}

