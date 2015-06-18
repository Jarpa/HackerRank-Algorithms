#include <iostream>

using namespace std;

int potencia(int x, int y){
	int result = 1;

	for (int i = 1; i <= y; ++i)
	{
		result = result * x;
	}


	return result;
}

int main(){

	int c,a,b;
	c = 0;
	a = 7;
	b = 5;
	float resultado = 0.0;

	c = potencia(a,2) + potencia(b,2);
	resultado = potencia(c,2);
	cout <<  resultado << endl;

	return 0;
}