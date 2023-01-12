#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void cd_thread(void arg){  //cod esecuzione thread
    pid_t pid; 
    pid = getpid(); //richiama l'identificatore del pid
    pthread_t tid;
    tid = pthread_self(); //richiama l'identificatore del tid
    printf("Sono il thread %1 del processo %1\n", (int)tid, pid);
}

int main (){
    pthread_t ptid; //identifica il thread alla creazione
    printf ("il pid del main e' %d\n", (int) getpid());
    pthread_create (&ptid, NULL, &cd_thread, NULL);
    return 0;
}
