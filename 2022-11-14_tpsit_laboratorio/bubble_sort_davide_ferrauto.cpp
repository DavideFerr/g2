
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

void bubble_sort(int h, int vett[]){
	int tmp;
	for (int j = 0; j < h; j++ )
	{
	
	for (int i=h-1; i>=j; i--)
	  {
	  if (vett[i]>vett[i+1]) 
	    {
	    tmp = vett[i];
	    vett[i] = vett[i+1];
	    vett[i+1] = tmp;
	    }
	  }
	
	}
}


void stampa_vettore(int h, int array[]){
		for(int i=0; i<h; i++){
		cout<<"\n\nCasella ["<<i<<"] :";
		cout<<array[i];
	}
}

int main(){
	int g=20;
	int min;
	int vettore[g];
	for(int i=0; i<g; i++){
		vettore[i]=(rand()%20)+0; 
	}
	srand((unsigned)time(0));
	stampa_vettore(g, vettore);
	
	//Ordinamento BubbleSort
	bubble_sort(g, vettore);
	
	cout<<"\n\n-------------BUBBLE SORT--------------\n\n";
	stampa_vettore(g, vettore);
	
}
