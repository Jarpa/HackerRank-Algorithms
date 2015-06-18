
int main(){

	int T;
	int N;
    
	cin >> T;
    while(T--){
        cin >> N;
        
       int x = potencia(N,2,100000);
        x--;
        if (x == -1) x = 99999; 
        cout <<  x << endl;
		
    }
    
	return 0;
}