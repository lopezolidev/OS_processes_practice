#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int id = fork() ;
    // creating a child process

    if(!id){
        sleep(1) ;
    } //putting the child to sleep for 1 second. 
    
    int res = wait(NULL) ; // tells us the number of the child process id that the parent's waiting for  
    // will be the id of the chilld process, once it's finished execution

    printf("Current id: %d. Parent id: %d\n", getpid(), getppid()) ;
    // printing id of the current executing process and parent process id

    if(res == -1){
        printf("There's no child to wait for \n");
    } else {
        printf("%d process has terminated\n", res) ;
    } // at first, it'll be -1 because the child process hasn't finish yet
    // then, when the parent process finished waiting for termination of child process, 
    // res will be != -1, then the id of the child process will be printed as res

    return 0;
}