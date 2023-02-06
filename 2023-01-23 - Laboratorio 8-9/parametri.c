

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int globale = 30;
void *thread(void *arg){
	int dato;
	dato = *(int*) arg + 20;
	srand(time(NULL));
	globale = globale * (rand() % 7) + dato;
	if(globale < 100)
	pthread_exit((int*)0):
		else
		pthread_exit((int*)1);
}

int main(){
	pthred_t tid;
		int ingresso;
		void *ritorno;
		ingresso = 10;
		pthread_create(&tid, NULL, thread, (void*) &ingresso);
		if (pthread_join(tid, &ritorno) == 0){
			printf(" valore di globale: %d\n", globale);
			printf(" valore di ingresso: %d\n", ingresso);
			printf(" uscita di ritorno: %d\n", ritorno);
			exit(0);
		}
		else
			printf("errore join del thread!");
			exit(-1);
}
