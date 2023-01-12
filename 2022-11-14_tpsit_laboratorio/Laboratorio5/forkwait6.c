#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //ho implementato questa libreria documentando il mio errore online, ma rimangono ancora degli errori.
#include <time.h>  //ho implementato questa libreria documentando il mio errore online, ma rimangono ancora degli errori.
#include <sys/wait.h> //ho implementato questa libreria documentando il mio errore online, ma rimangono ancora degli errori.
int main(){
int  pid =  fork();
	if(pid == 0){
		printf(" eseguito dal figlio \n");
		exit(0);
	}
	else{
		pid = wait(&status);
		if(WIFEXITED(status))
		printf(" ", pid,  WEXITSTATUS(status));
		else 
		if(WIFSIGNALED(status))
		printf(" n", WTERMSIG(status));
	}
}
