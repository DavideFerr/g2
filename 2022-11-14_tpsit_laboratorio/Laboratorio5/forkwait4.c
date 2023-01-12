#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //ho implementato questo plugin documentando il mio errore online, ora non ci sono più errori nell'esecuzione.
#include <time.h>  //ho implementato questo plugin documentando il mio errore online, ora non ci sono più errori nell'esecuzione.
#include <sys/wait.h> //ho implementato questo plugin documentando il mio errore online, ora non ci sono più errori nell'esecuzione.
int main(){
	int pid, pid1, pid2, status, x;
	srand(time(NULL));
	pid1=fork();
	if(pid1==0){
		printf("1) sono il primo processo figlio con pid: %i \n", getpid());
		sleep(4);
		exit(1);
	}else{
		pid2 = fork();
		if(pid2 == 0){
			printf("2) sono il secondo processo figlio con pid %i \n", getpid());
			sleep(1);
			exit(2);
		}else{
			printf("3) padre in attesa del figlio piu' Lento \n");{
				pid=waitpid(pid1, &status, 0);
				printf("4) finalmente termina il figlio con pid: %d\n", pid);
				return 0;
			}
		}
	}
}
