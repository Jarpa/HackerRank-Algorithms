#include <iostream>
#include <string>
using namespace std;

int main(){

	int array[] = {1 , 2 , 4 , 5 , 1 , 3 , 9 , 2};
	//int array[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8  };
	int tam = 8;
	bool estado = true;
	string est = "";
	for (int i = 0; i < tam; ++i)
	{
		for (int j = i  ; j < tam; j++){
	
				if(array[i] == array[j + 1]){
						estado = false;	
				}
		
		}
	}

	if(estado == 0){
		est = "VERDADERO";
	}else if(estado == 1){
		est = "FALSO";
	}


	cout << est << endl;

	return 0;
}