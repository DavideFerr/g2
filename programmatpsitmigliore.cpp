#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	
	
	int ndibit;
	int a;
	cout<<"scegli quanti bit generare (da 8 a 32) : ";
	cin>>ndibit;
	
	while(ndibit<8 || ndibit>32){
		cout<<"numero inserito invalido, riprova :";
		cin>>ndibit;
	}
	
	int bit[ndibit];
	srand (time(NULL));
	
	cout<<"numero di bit: "<<ndibit<<endl;

	
	for(int i=0; i<ndibit; i++){
	int a=rand() % 2;
	bit[i] = a;
	}

	cout<<"\nquesta e' la sequenza di bit generati: ";
	for(int i=0; i<ndibit; i++){
		cout<<bit[i];
	}
	
	int m=4;
	int gx[m];
	gx[0]=1;
	gx[1]=1;
	gx[2]=0;
	gx[3]=1;
	
	cout<<"\n\nmx: ";
	for(int i=0, h = ndibit ; h>=0, i<ndibit; h--, i++){
		if (bit[i]==1){
			cout<<"x^"<<h-1<<"+";
		}
	}
	
	ndibit=ndibit+3;
	
	//aggiunta 000 al bit perché il gx è 1011
	bit[ndibit];
	bit[ndibit-1]=0;
	bit[ndibit-2]=0;
	bit[ndibit-3]=0;
	
	for(int i=0, h=3; i<ndibit; i++, h--){
		
		cout<<"\n\nrisultato tra :"<<bit[i]<<" e ";
		if(h==-1){
			h=3;
		}
		cout<<gx[h]<<" = ";
		if (bit[i] == gx[h]){
			bit[i] = 0;
		}else {
		bit[i]=1;
		}
		cout<<bit[i];
	}
	
	
	
	
}
