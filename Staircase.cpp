#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{ 
		for (int j = N; j > 0; --j)
		{
			if((N + i) < (N + j - 1)){
			cout << " ";
			}else{
			cout << "#";
			}

		}
		cout << endl;
	}

    return 0;
}