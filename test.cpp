#include <iostream>
using namespace std;
int main(){

	int arreglo[] = {1,5,3,2,10};
	int aux = 0;




	for (int i = 1; i < 5; ++i)
	{
		cout << arreglo[i] << " " << endl;

		for (int j = 0; j < 5 - 1 ; ++j)
		{
		
		if (arreglo[j + 1] > arreglo[j]){
			aux = arreglo[j + 1];
			arreglo[j + 1] = arreglo[j];
			arreglo[j] = aux;
		}
	}
		
	}


	for (int i = 0; i < 5; ++i)
	{
		cout << arreglo[i] << " ";
	}

	cout << endl;
	return 0;

}
