#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

void stampa_bit(int &ndibit, int bit[]){
	cout<<"\nquesta e' la sequenza di bit attuale: ";
	
	for(int i=0; i<ndibit; i++){
		cout<<bit[i];
	}
}

void riscrittura(int bit[],int &ndibit)
	{	
		int i=0;
		
        if(bit[i]==0){
        	
        	cout<<"\n------------bit prima del found 0--------";
        	stampa_bit(ndibit, bit);
			HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    		SetConsoleTextAttribute(h,4);
    		cout<<"-Found 0-";
    		SetConsoleTextAttribute(h,15); 
        	int j;
        	for(int i=0; i<ndibit; i++){
        		j=i+1;
        		bit[i]=bit[j];
				i=i+1;
			}
/*	        while(i<ndibit)
			{
				j=i+1;
				bit[i]=bit[j];
				i=i+1;
			}   
 */   	
 		}	            
        ndibit=ndibit-1;
		stampa_bit(ndibit, bit);
		
	}
    


    //PRIMA TRASFORMO I PRIMI 4 POI LI VERIFICO E SE TROVO L 1 RIPRENDO DA LI 



/*	riparte_da_uno(int bit[], int ndibit){
		int posizione;
		riscrittura(bit, ndibit);
		for(int i=0; i<ndibit; i++){
			if(bit[i]==1){
				posizione=i;
				return posizione;
			}
		}
	}
*/
int ndibit;

int main(){
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,15);   
	int m=0;
	int gx[m];
	int scelta_divisore;
	int a;
	cout<<"scegli quanti bit generare (da 8 a 32) : ";
	cin>>ndibit;
	
	while(ndibit<8 || ndibit>32){
		cout<<"numero inserito invalido, riprova :";
		cin>>ndibit;
	}
	
	
	cout<<"Scegli il divisore--\n\n1]1001\n\n2]101\n\n:";
	cin>>scelta_divisore;
	
	while(scelta_divisore!=1 && scelta_divisore!=2){
		cout<<"numero inserito invalido, riprova :";
		cin>>scelta_divisore;
	}
	
	int bit[ndibit];
	srand (time(NULL));
	
	cout<<"numero di bit: "<<ndibit<<endl;

	
	for(int i=0; i<ndibit; i++){
	int a=rand() % 2;
	bit[i] = a;
	}

	stampa_bit(ndibit, bit);
	if(scelta_divisore==1){
	cout<<"\n\nil divisore e': 1001";
		m=4;
		gx[m];
		gx[0]=1;
		gx[1]=0;
		gx[2]=0;
		gx[3]=1;
		
		ndibit=ndibit+3;
		bit[ndibit];
		bit[ndibit-1]=0;
		bit[ndibit-2]=0;
		bit[ndibit-3]=0;
		stampa_bit(ndibit, bit);
	}else if(scelta_divisore==2){
		cout<<"\n\nil divisore e': 101";
		gx[m];
		m=3;
		gx[0]=1;
		gx[1]=0;
		gx[2]=1;
		
		ndibit=ndibit+2;
		bit[ndibit];
		bit[ndibit-1]=0;
		bit[ndibit-2]=0;
		stampa_bit(ndibit, bit);
	}
	
	
	cout<<"\n\nmx: ";
	for(int i=0, h = m ; h>=0, i<m; h--, i++){
		if(h<2){
			if (gx[i]==1){
				cout<<"1";
			}
		}
		else if (h>1)
		{	
			if (gx[i]==1){
				cout<<"x^"<<h-1<<"+";
				
			}
		}
}
	
	//aggiunta 000 al bit perche' il gx e' 1001
	//	int posizione=0;
	
	
	//	int traguardo=ndibit-2;
    bool loop=true;

	for(int i=0, h=3; m=true; i++, h--){
		
		if(ndibit<=3){
            cout<<"\n\n-----------RISULTATO FINALE--------";
            riscrittura(bit, ndibit);
			return 0;
            
		}
/*		if(posizione!=0){
			i=posizione;
			cout<<"\n-----------------nuovo inizio--------------------------------";
		}
*/
		if(h==-1){
			//i=riparte_da_uno(bit, ndibit);
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
