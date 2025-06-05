#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(){
    printf("created by parent \n") ; // called by parent
    
    fork() ; 
    // creates Child 1 → it's a copy of main from this point onward, not a copy of the whole function

    // we have 2 processes to this point

    printf("hello world \n") ; 
    // printed by Parent process and Child 1

    fork() ; // creates Child 2 by Parent Process and Child 3 from Child 1 

    // We have 4 processes to this point, Parent process, Child 1, Child 2 and Child 3

    printf("Hello world from child and parent \n") ;
    //printed by Pp, Ch1, Ch2 and Ch3
    return 0 ;
}