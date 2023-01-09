#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
int main(){
int status;
int pid = fork();
if (pid == 0){
printf("sono il figlio, il mio pid e' : %d. ", getpid());
printf("il mio papi ha pid: %d\n", getppid());
exit(69);
}
else{
printf("Sono il padre, il mio pid e' : %d. ", getpid());
printf("L'exit di mio figlio (%d) e' : %d\n", wait(&status), status);
return 0;
}
}
