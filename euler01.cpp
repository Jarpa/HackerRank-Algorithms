#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long n(long long n){ return n * (n + 1)/2; }

int main() {
    int T;
    cin >> T;
    while(T--){
    	long long N;
        cin >> N;
        N = N - 1;
        cout << n(N/3)*3 + n(N/5)*5 - n(N/15)*15 << endl;
    }
    return 0;
}