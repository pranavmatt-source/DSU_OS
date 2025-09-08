#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <sys/wait.h>

void main(int argc, char arg[]) {
    int pid;
    pid = fork();
    printf("%d",pid);

    if(pid < 0){
        printf("Process not created\n");
        exit (1);
    } else if (pid == 0) {
        printf("parent process\n");
        excelp("ls","ls",NULL);    // <-- typo here
        exit (0);
    } else {
        printf("child process\n");
        printf("its process id is %d\n", getpid());
        wait(NULL);                 // wait() needs <sys/wait.h>
        printf("return back to parent process\n");
        exit (0);
    }
}
