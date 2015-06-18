#include <iostream>
using namespace std;
#define MAX 40000000000000000


int main(){
	int T;
	 long N;
	 long sum = 0;
	 int previo = 1; 
	 long actual = 2;
	 long fib;
	cin >> T;
	if(T >= 1 && T <= 100000){
	while(T--){
		cin >> N;
                if(N >= 10 && N <= MAX){
				while(actual <= N){
					
					if(actual % 2 == 0 && actual <= N)
						sum += actual;
						
					fib = (previo + actual);
					previo = actual;
					actual = fib;
				}
        
		          cout << sum << endl;
            }
	}
   }
	return 0;
}
