#include <iostream>
#include <cstdlib>

using namespace std;
//Declarar Funciones...
int rand(int R);
int buscarNum(int numero, int arreglo[], int N);
void mostrar(int arreglo[], int N);
//Funcion Main...

int main(){
    
    int N = 5; 
	int array[N];
	int random = 0;
	int R = 5;
	int estado = 0;
	
	for (int i = 0; i < N; ++i)
	{
		array[i] = 0;
		
		do{
			random = rand(R);
			estado = buscarNum(random,array,N);
		}while(estado);

		array[i] = random;
	}

	mostrar(array,N);
	return 0;
}



//Funciones...

int rand(int R){

	int random;
	
	random = 1 + (rand() % R);

	return random;

} 

int buscarNum(int numero, int arreglo[], int N){
	int i, stop = 0;

	for (int i = 0; (i < N && stop == 0); ++i)
	{
		if (arreglo[i] == numero)
		{
			stop = 1;
		}
	}

	return stop;
	
}

void mostrar(int arreglo[], int N){

	for (int i = 0; i < N; ++i)
	{
		cout << arreglo[i] << endl;
	}
}