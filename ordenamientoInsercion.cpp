#include <iostream>
using namespace std;

void ordenamientoInsercionArray(int array[] , int dimension);
void imprimirArray(int array[], int dimension);

int main(int argc, char *argv[]) {
	int lista[10] ={11,4,7,8,1,3,2,5,9,10};
	imprimirArray(lista,10);
	ordenamientoInsercionArray(lista,10);
	imprimirArray(lista,10);
	return 0;
}

void ordenamientoInsercionArray(int array[] , int dimension){
	int i , j , aux;
	bool encontrado;
	for(i = 1 ; i < dimension ; i ++){
		aux = array[i];
		j = i - 1;
		encontrado = false;
		while((j >= 0) && ! encontrado){
			if(aux < array[j]){
				array[j+1] =  array[j];
				j--;
			}else{
				encontrado = true;
			}
			array[j+1] = aux;
		}
	}
}
void imprimirArray(int array[], int dimension){
	for(int i = 0 ; i < dimension ; i++){
		cout<< array[i] <<" " ;
	}
	cout << endl;
}
			
