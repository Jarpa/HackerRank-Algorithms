#include <iostream>

using namespace std;

bool isPrime(int x){
	bool estado = true;
	
	for (int i = 0; i < x; ++i)
	{
		int valor = (i + 1);
		if(x % valor == 0 && valor != 1 && valor != x){
			estado = false;
		} 
		
		
	}
	return estado;
}

int main()
 {
 	int contador = 0;
 	int i = 1;
 	while(true){
 		i = i + 1;
 		int p = isPrime(i);
 		if(p){
 			contador++;
 		}

 		if(p){
 			cout << "Numero primo : " << i << " y van : " << contador << " numeros primos !" << endl;
 		}

 		if (contador == 10001){
 			break;
 		}


 	}

 	return 0;
 } 