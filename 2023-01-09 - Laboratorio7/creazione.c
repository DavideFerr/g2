#include <stdio.h>
#include <stdlib.h>  //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <unistd.h> //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <time.h>  //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <sys/wait.h> //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <pthread.h>

void *cd_thread(void * arg){  //cod esecuzione thread
    pid_t pid; 
    pid = getpid(); //richiama l'identificatore del pid
    pthread_t tid;
    tid = pthread_self(); //richiama l'identificatore del tid
    printf("Sono il thread %i del processo %i\n", (int)tid, pid);
}

int main (){
    pthread_t ptid; //identifica il thread alla creazione
    printf ("il pid del main e' %d\n", (int) getpid());
    pthread_create (&ptid, NULL, &cd_thread, NULL);
    return 0;
}
