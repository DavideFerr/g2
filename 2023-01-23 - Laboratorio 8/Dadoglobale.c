#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int parametroOUT;
void* codice(void *arg){
	srand(time(NULL));
	parametroOUT = (rand() % 6) + 1;
	pthread_exit((void*) &parametroOUT);
}
int main (){
	int dadoEstratto, *risultato;
	pthread_t t1;
	pthread_create(&t1, NULL, codice, NULL);
	printf("dado estratto: %d\n", *risultato);
	return 0;
}
