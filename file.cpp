#include <iostream>
using namespace std;

int main(){
	
	int array[] = {1,2,4,5,1,3,9,2};
	int aux = 0;
	int tam = 8;
	bool estado = true;
	int indiceMenor = 0;

	for(int i = 0; i < (8 - 1); i++){
		indiceMenor = i;
		for(int j = i + 1; i < 8; j++){

			if(array[i] < array[indiceMenor]){
				indiceMenor = j;
			}
			if (i != indiceMenor){
				aux = array[i];
				array[i] = array[indiceMenor];
				array[indiceMenor] = aux;
			}
		}
bb
	}

	for(int k = 0; k < 8; k++){
		cout << array[k] << " - ";
	}

	return 0;
}