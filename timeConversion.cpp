#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   	
    int hh;
   	int mm;
   	int ss;
   	int hh_convert = 0;
   	string _hh;
   	string _mm;
   	string _ss;
   	string cadena;
   	getline(cin,cadena);
   	string tipo;
	
   	
	_hh = cadena.substr(0,2);
	_mm = cadena.substr(3,2);
	_ss = cadena.substr(6,2);
	tipo = cadena.substr(8,2);
	
     hh = atoi(_hh.c_str());
     mm = atoi(_mm.c_str());
	 ss = atoi(_ss.c_str());
   if(hh_convert >= 00 && hh_convert <= 23 ){
		if(mm >= 00 && mm <= 59){
		  if( ss >= 00 && ss <= 59){
	if(tipo == "PM"){
        
        if(hh == 12){
        	hh_convert = hh;
        }else{          
			hh_convert = hh + 12;
		}
		if(hh_convert >= 00 && hh_convert <= 23 ){
			if(mm >= 00 && mm <= 59){
				if( ss >= 00 && ss <= 59){
					if(hh_convert <= 9){
   						cout << "0" << hh_convert;
        			    
        			}else{
   						cout << hh_convert; 
        			}
   	    			cout << ":";
        			if(mm <= 9){
        			      cout << "0" << mm;
        			}else{
        			   cout << mm;
        			}
        			cout << ":";
        			if(ss <= 9){
        			    cout << "0" << ss << endl;    
        			}else{
        			    cout << ss << endl;
        			}
        		}	
        	}		
    	}
     
	}else if(tipo == "AM"){
		


		if(hh >= 12){
		hh_convert = hh - 12;
		}else{
			hh_convert = hh;
		}

		if(hh_convert >= 00 && hh_convert <= 23 ){
			if(mm >= 00 && mm <= 59){
				if( ss >= 00 && ss <= 59){
					if(hh_convert <= 9){
   						cout << "0" << hh_convert;
        			    
        			}else{
   						cout << hh_convert; 
        			}
   	    			cout << ":";
        			if(mm <= 9){
        			      cout << "0" << mm;
        			}else{
        			   cout << mm;
        			}
        			cout << ":";
        			if(ss <= 9){
        			    cout << "0" << ss << endl;    
        			}else{
        			    cout << ss << endl;
        			}
        		}	
        	}		
    	}
	}
        }
          }
      }    

    return 0;
}