#include <iostream>
using namespace std;
void intercambioVariables(int& x , int& y);
void ordenamientoBurbujaArray(int array[] , int dimension);
void imprimirArray(int array[], int dimension);

int main(int argc, char *argv[]) {
	int lista[5] ={11,4,7,8,1};
	imprimirArray(lista,5);
	ordenamientoBurbujaArray(lista,5);
	imprimirArray(lista,5);
	
	return 0;
}

void intercambioVariables(int& x , int& y){
	int aux = x;
	x = y ;
	y = aux;
}
void ordenamientoBurbujaArray(int array[] , int dimension){
	int i, j ;
	bool interruptor  = true;
	for(i = 0 ; i < (dimension-1) && interruptor ; i++){
		interruptor = false;
		for(j = 0 ; j < dimension - i -1 ; j++){
			if(array[j] > array[j+1]){
				interruptor = true;
				intercambioVariables(array[j] , array[j+1]);
			}
		}
	}
}
		
void imprimirArray(int array[], int dimension){
	for(int i = 0 ; i < dimension ; i++){
		cout<< array[i] <<" " ;
	}
	cout << endl;
}			
