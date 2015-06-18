#include <iostream>

using namespace std;

int main(){

	int a, suma, i, b;
	suma = 0;
	a = 5;
	b = 2;

	for(i = 1 ; i <= a ; i++){
		suma = suma + b;
	}

	cout << suma << endl;
	return 0;
} 