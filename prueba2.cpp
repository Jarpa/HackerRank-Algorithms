#include <iostream>
#include <string>
using namespace std;




int main(){

	int N = 5;
	int numeros[] = {1 , 2 , 3 , 1 , 3 };

	int aux  = 0;
	int cont = 0;
	int x = 0;
	for ( int i = 0; i < N;i++)
	{
		for(int j = 0; j < i; j++){
			
			if(numeros[i] == numeros[j]){
				aux = rand() % 3;
				numeros[i] = aux;
				
			}
		}

		cout << numeros[i];
	}


	 
		
	





	

	return 0;
}