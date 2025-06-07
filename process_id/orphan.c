#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>

int main(){

    int id = fork() ;

    if (!id){
        sleep(1) ;
    } // pausing execution of the child for 1 second
    // the parent will finis execution and the child will be left with no parent process
    // then the child will have assigned a differnt parent, tipically systemd, and will enter into zombie state

    printf("Current process id: %d, Parent process id: %d\n", getpid(), getppid()) ;

    return 0;
}
// output :
// Current process id: 13042, Parent process id: 12079
// after 1 second...
// Current process id: 13043, Parent process id: 2337
