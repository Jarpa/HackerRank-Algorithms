#include <iostream>

using namespace std;

int main(){
	int N;

	cin >> N;

	int matrix[N][N];
	int dato;
	int sum = 0;
	int sum1 = 0;
	int res = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> dato; 
			matrix[i][j] = dato;

		}
	}	

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{

			if(i == j){
				sum += matrix[i][j];
			}

			if( i == (N - j - 1) ) {
				
				sum1 += matrix[i][j];

			}
				
			

			
		}

	}
	
	if(sum < sum1){
		res = sum1 - sum;
	}else{
		res = sum - sum1;	
	}
	
	cout << res << endl;

	return 0;
}