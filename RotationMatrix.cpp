#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
	int R;
	int N;
	int M;
	int A;
	
	cin >> M >> N >> R;
	int matrix[M][N];
	
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> A;
			matrix[i][j] = A;
		}
	
	}


	while(R--){
		for (int i = 0; i < M; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				cout << matrix[i][j] << " ";
			}

			cout << endl;
		}
	}

	return 0;
}
