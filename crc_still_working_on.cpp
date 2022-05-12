#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;

void stampa_bit(int ndibit, int bit[]){
	cout<<"\nquesta e' la sequenza di bit generati: ";
	for(int i=0; i<ndibit; i++){
		cout<<bit[i];
	}
}

void riscrittura(int bit[],int ndibit)
	{	
		int i=0;
		int j;
		while(i<ndibit)
		{
		j=i+1;
		bit[i]=bit[j];
		i++;
		}
		ndibit=ndibit-1;
		stampa_bit(ndibit, bit);
	}

	riparte_da_uno(int bit[], int ndibit){
		int posizione;
		riscrittura(bit, ndibit);
		for(int i=0; i<ndibit; i++){
			if(bit[i]==1){
				posizione=i;
				return posizione;
			}
		}
	}


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

	stampa_bit(ndibit, bit);
	
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
	
	//aggiunta 000 al bit perche' il gx e' 1011
	bit[ndibit];
	bit[ndibit-1]=0;
	bit[ndibit-2]=0;
	bit[ndibit-3]=0;
	
	int posizione=0;




	
	int traguardo=ndibit-2;

	for(int i=0, h=3; i<ndibit-1; i++, h--){
		
		if(ndibit<=4){

			return 0;
		}
/*		if(posizione!=0){
			i=posizione;
			cout<<"\n-----------------nuovo inizio--------------------------------";
		}
*/
		if(h==-1){
			i=riparte_da_uno(bit, ndibit);
			h=3;
		}
		cout<<"\n\nrisultato tra :"<<bit[i]<<" e ";
		cout<<gx[h]<<" = ";
		if (bit[i] == gx[h]){
			bit[i] = 0;
		}else {
		bit[i]=1;
		}
/*		if(bit[i]==1){
			posizione=i;
		}
*/		cout<<bit[i];

		riscrittura(bit, ndibit);
	}
	
	
	
	
}
