#include <stdio.h>
#include <stdlib.h>  //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <unistd.h> //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <time.h>  //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <sys/wait.h> //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <pthread.h>

int main(){
    int pid;
    printf("1) prima della fork \n");
    pid = fork();
    printf(" 2) dopo della fork \n");
    if(pid==0){
        printf(" 3) sono il processo figlio con pid:%d.",getpid());
        printf(" il mio papi ha pid: %d\n", getppid());
        exit(1);
    }else{
        printf(" 3) sono il processo padre con pid:%d.", getpid());
        printf(" il mio papi ha pid: %d/n", getppid());
        exit(0);
    }
}
