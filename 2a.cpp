// число m ділиться на кожну з своїх цифр 
#include <iostream>
using namespace std;       

int main( int argc, char** argv ) {

	cout << "enter number m (up to 9 digits)" << endl;  
	int m = 0;                           
	cin >> m; 
	
	int arr[10];          
	int i = 0;            
	int k = 0;
	while ( m > 0 )       
	{  
	   arr[i] = m % 10;       
	   m /= 10;         
	   i++;       
	   k = m % arr[i];
	    if ( k == 0 )
	   	{
	   		cout << "m dilutsa na" << arr[i];
		   }
	    else 
	    {
	    	cout << "m ne dilutsa na" << arr[i];
		}
	return 0;
	}
	}
