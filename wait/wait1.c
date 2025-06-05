#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <time.h> // special library to measure time or make processes to wait

 int main(){
    int n = 0 ;

    int id = fork() ;

    if(id == 0){
        n = 1 ;
    } else {
        wait() ;
        n = 6 ;
        // the main process will make n = 6 
        // and now, will have to wait until the child process finishes executing
    }

    int i = n ; 
    while(i < n + 5){
        printf("%d", i) ;
        fflush(stdout) ; // making the terminal load a buffer before printing
        i++ ;
    } // according to the process that gets to the loop first, the printing will occur
    printf("\n") ;

    return 0;
 }