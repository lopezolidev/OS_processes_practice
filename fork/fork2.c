#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
    int pid = fork() ; 
    // returning the id of the new process created → must be 0

    if( pid == 0 ){
        printf("Hello from child process! \n");
    } else {
        printf("Hello world from parent process \n") ;
    }
    
    return 0;
}