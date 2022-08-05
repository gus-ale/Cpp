#include <iostream>
using namespace std;
void intercambioVariables(int& x , int& y);
void ordenamientoShell(int array[],int dimension);
void imprimirArray(int array[], int dimension);	

int main(int argc, char *argv[]) {
	int lista[5] ={11,4,7,8,1};
	imprimirArray(lista,5);
	ordenamientoShell(lista,5);
	imprimirArray(lista,5);
	return 0;
}

void ordenamientoShell(int array[],int dimension){
	int i, j, k , salto = dimension/2;
	int auxiliar;
	while (salto > 0) 
	{
		for (i = salto; i < dimension ; i++){ 
			j = i - salto;
			while(j >= 0)
			{
				k = j + salto;
				if (array[j] <= array[k]){
					j = -1; 
				}
				else
				{
					intercambioVariables(array[j] , array[k]);
					j = j - salto;
				}
			}
		}
		salto = salto / 2;
	}
}
void intercambioVariables(int& x , int& y){
	int aux = x;
	x = y ;
	y = aux;
}
void imprimirArray(int array[], int dimension){
	for(int i = 0 ; i < dimension ; i++){
		cout<< array[i] <<" " ;
	}
	cout << endl;
}	
