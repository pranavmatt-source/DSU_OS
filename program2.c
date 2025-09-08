#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void main(){
    int pid;
    pid = fork();
    
    if(!pid){
        printf("Child process");
        printf("\n\nChild PID : %d",getpid());
        printf("\n\nParent PID : %d",getppid());
        printf("Finished with child");
    } else {
        wait(NULL);
        printf("\nParent process");
        printf("Parent PID : %d",getppid());
        printf("Child PID : %d",pid);
    }
}