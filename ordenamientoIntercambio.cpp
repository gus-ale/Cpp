#include <iostream>
using namespace std;
void intercambioVariables(int& x , int& y);
void ordenamientoIntercambioArray(int array[] , int dimension);
void imprimirArray(int array[], int dimension);

int main(int argc, char *argv[]) {
	int lista[5] ={11,4,7,8,1};
	imprimirArray(lista,5);
	ordenamientoIntercambioArray(lista,5);
	imprimirArray(lista,5);
		
	return 0;
}

void intercambioVariables(int& x , int& y){
	int aux = x;
	x = y ;
	y = aux;
}
void ordenamientoIntercambioArray(int array[] , int dimension){
	int i , j;
	for(i = 0 ; i < dimension - 1 ; i ++){
		for(j = i + 1 ; j < dimension ; j ++){
		
			if(array[i] > array[j]){
				intercambioVariables(array[i] , array[j]);
			}
			cout <<"i : "<< i << "   j: " << j << endl;
			cout<< array[0]<< "  " << array[1] << "  " <<array[2] << "  " << array[3] << "  " <<array[4] <<endl; 
			cout<<"---------------------------------"<< endl;
		}
	}
}

void imprimirArray(int array[], int dimension){
	for(int i = 0 ; i < dimension ; i++){
		cout<< array[i] <<" " ;
	}
	cout << endl;
}
	
	
