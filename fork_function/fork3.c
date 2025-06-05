#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(){
    int pid1 = fork();
    // 2 processes, parent and C1

    if (pid1 != 0){
        fork();
        // Call by main process. Its pid is different from 0, therefore only 1 creation occurs
    } 
    
    printf("Hello from main process and first child process! \n") ;
    // print by Parent process, C1 and C2 created by Parent process

    return 0;
}