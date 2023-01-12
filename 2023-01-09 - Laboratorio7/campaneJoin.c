#include <stdio.h>
#include <stdlib.h>  //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <unistd.h> //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <time.h>  //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <sys/wait.h> //ho implementato questa libreria documentando il mio errore online, ora non ci sono più errori.
#include <pthread.h>

void* thread1(void* arg){
    sleep(rand() % 1);
    printf("DIN ");
    fflush(stdout);
}

void* thread2(void* arg){
    sleep(rand() % 2);
    printf("DON ");
    fflush(stdout);
}

void* thread3(void* arg){
    sleep(rand() % 3);
    printf("DAN ");
    fflush(stdout);
}

int main (){
    srand(time(NULL));
    pthread_t miothread1, miothread2, miothread3;
    printf ("il pid del main e' %d\n", (int) getpid());
    pthread_create(&miothread1, NULL, &thread1, NULL);
    pthread_create(&miothread2, NULL, &thread2, NULL);
    pthread_create(&miothread3, NULL, &thread3, NULL);
    pthread_join (miothread1, NULL);
    pthread_join (miothread2, NULL);
    pthread_join (miothread3, NULL);
    return 0;
}
