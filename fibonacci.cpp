#include <iostream>
using namespace std;

int fibonacci(int n){
	if(n < 2){
		return n;
		
	}else{
		return fibonacci(n - 1) + fibonacci(n - 2);
		
	}
}


int main(){
	int contador = 0;
	int result = 0;
	for (int i = 0; i <= 1000; ++i)
	{
		contador++;
		result = fibonacci(i);
		cout << "F"<<(i + 1)<< " "<< result << endl;
		if(result > 20000)
			break;
	}
	return 0;
}