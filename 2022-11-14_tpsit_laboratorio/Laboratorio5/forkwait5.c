#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define NRFIGLi 4
int main(){
int pid, status, x;
for(x=0; x<NRFIGLI; x++){
	pid=fork();
	if(pid==0){
		printf(" Sono il figlio, il mio pid e': %d.", getpid());
		printf(" Il mio papi ha pid: %d. ", getpid());
		exit(0);
	}
	else{
		printf("Sono il padre, il mio pid e': %d.", getpid());
		printf("Il pid del figlio corrente e':%d. \n", pid);
		printf("L'exit di mio figlio (%d) e': %d\n\n", wait(&status), status);
	}
}
return 0;
}
