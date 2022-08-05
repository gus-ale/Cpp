#include <iostream>
using namespace std;

void ordenamientoInsercionBinariaArray(int array[] , int dimension);
void imprimirArray(int array[], int dimension);

int main(int argc, char *argv[]) {
	int lista[10] ={11,4,7,8,1,3,2,5,9,10};
	imprimirArray(lista,10);
	ordenamientoInsercionBinariaArray(lista,10);
	imprimirArray(lista,10);
	return 0;
}

void ordenamientoInsercionBinariaArray(int array[] , int dimension){
	int i , j , aux , der, izq, centro;
	for(i=1 ; i < dimension; i++){ 
		izq = 0;
		der = i-1;
		aux = array[i];
		while(izq <= der){
			centro = (izq + der) / 2;
			if(array[centro] > aux){
				der = centro-1;
			}
			else{
				izq = centro + 1;
			}
		}
		for(j= i-1 ; j >= izq ; j--){
			array[j+1] = array[j];
		}
		array[izq] = aux;
	}
}
void imprimirArray(int array[], int dimension){
	for(int i = 0 ; i < dimension ; i++){
		cout<< array[i] <<" " ;
	}
	cout << endl;
}
		
		
