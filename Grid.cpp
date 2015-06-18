#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int g[2][5] = {
	{0,2,4,6,8},
	{1,3,5,7,9}
};

int main(){
	long R,C;
	cin >> R >> C;
	R--;
	C--;
	long x = (R/2)*10 + g[R%2][C];

	cout << x <<endl;

	return 0;
}
