#include <iostream>
using namespace std;
#define MAX 20000


int main(){

	long r,c,a,value;
	cin >> r >> c;
	
	

	value=((c-1)*2+(r-1)/2*10); 
	if((r-1)%2!=0) value++; 
	cout << value <<endl; 
	return 0;
}