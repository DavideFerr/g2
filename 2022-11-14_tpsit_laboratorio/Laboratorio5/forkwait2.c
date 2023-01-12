#include <stdio.h>
#include <stdlib.h>
int main(){
int pid,pid1,pid2,status,x;
srand(time(NULL));
pid1 = fork();
if(pid1==0){
	x=(rand() % 4) +1;
	printf("1) sono il primo processo figlio con pid: %i sleep: %d\n", getpid(), x);
	sleep(x);
	exit(1);
}else{
	pid2 = fork();
	if(pid2==0){
		x=(rand() %2)+1;
		printf("2) sono il secondo processo figlio con pid: %i sleep: %d\n", getpid(), x);
		sleep(x);
		exit(2);
	}else{
		printf("3) padre in attesa del primo figlio che termina\n");
		pid=wait(&status);
		printf("4) per primo termina il figlio con pid: %d\n", pid);
		return 0;
	}
	
}
}
