#include <iostream>
#include <math.h>
using namespace std;

int potencia(int x, int y)
{
           int resultado=1;
           int i;
           for(i=1;i<=y;i++)
               resultado = resultado * x;
           return resultado;
}

int main(){

	int sum1 = 0;
	int sum2 = 0;
	int valor = 0;
	int res = 0;

	for (int i = 1; i <= 100; ++i)
	{
		sum1 = sum1 + potencia(i,2);
		sum2 = sum2 + i;
		res = potencia(sum2,2);
		
	}

	if(sum1 > res){
		valor = (sum1 - res);
	}else{
		valor = (res - sum1);
	}

	cout << sum1 << endl;
	cout << res << endl;
	cout << "Diferencia : " << valor << endl;

	return 0;
}