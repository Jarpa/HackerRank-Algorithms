#include <iostream>

using namespace std;

struct cubo
	{
		int indice[][] = 
						 //Cara A
						 {1,2,3},
						 {4,5,6},
						 {7,8,9},
						 //Cara B
						 {1,2,3},
						 {4,5,6},
						 {7,8,9},
						 //Cara C
						 {1,2,3},
						 {4,5,6},
						 {7,8,9},
						 //Cara D
						 {1,2,3},
						 {4,5,6},
						 {7,8,9},
						 //Cara E
						 {1,2,3},
						 {4,5,6},
						 {7,8,9},
						 //Cara F
						 {1,2,3},
						 {4,5,6},
						 {7,8,9};


		string color = "";
	}cuboA;

int main(){

	cout << cuboA.indice[0][0] << endl;
	

	return 0;
}
