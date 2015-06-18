#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
	int N;
	int A;
	int contNeg = 0;
	int contCero = 0;
	int contPos = 0;
	int i = 0;
	cin >> N;
	int array[N];

	while(i < N ){

		cin >> A;
		array[i++] = A;
		

	}

	for (int i = 0; i < N; ++i)
	{
		if(array[i] >= 1){
			contPos++;
		}else if(array[i] == 0){
			contCero++;
		}else if(array[i] < 0){
			contNeg++;
		}
	}


	cout << fixed << showpoint;
    cout << setprecision(3);
	
	cout << (float) contPos/N << endl;
	cout << (float) contNeg/N << endl;
	cout << (float) contCero/N << endl;
		
	

	

    return 0;
}
