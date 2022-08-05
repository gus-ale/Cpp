#include <iostream>
using namespace std;
void intercambioVariables(int& x , int& y);
void ordenamientoSeleccionArray(int array[] , int dimension);
void imprimirArray(int array[], int dimension);

int main(int argc, char *argv[]) {
	int lista[10] ={11,4,7,8,1,3,2,5,9,10};
	imprimirArray(lista,10);
	ordenamientoSeleccionArray(lista,10);
	imprimirArray(lista,10);
	return 0;
}

void intercambioVariables(int& x , int& y){
	int aux = x;
	x = y ;
	y = aux;
}
void ordenamientoSeleccionArray(int array[] , int dimension){
	int i , j , posMin ;
	for(i = 0 ; i < dimension - 1 ; i ++){
		posMin = i;
		for(j = i + 1 ; j < dimension ; j ++){
			if(array[j] < array[posMin]){
				posMin = j;
			}
		}
		intercambioVariables(array[posMin], array[i]);
	}
}
void imprimirArray(int array[], int dimension){
	for(int i = 0 ; i < dimension ; i++){
		cout<< array[i] <<" " ;
	}
	cout << endl;
}
			
