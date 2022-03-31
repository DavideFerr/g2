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
	
	cout<<"numero di bit: "<<ndibit<<endl;
	
	for(int i=0; i<ndibit; i++){
	int a=rand() % 2;
	bit[i] = a;
	}

	cout<<"\nquesta e' la sequenza di bit generati: ";
	for(int i=0; i<ndibit; i++){
		cout<<bit[i];
	}
}
