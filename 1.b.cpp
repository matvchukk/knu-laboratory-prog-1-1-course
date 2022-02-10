//знайти всі натуральні m<=N, які кратні k 
#include <iostream>
using namespace std;       

int main( int argc, char** argv ) {
	
	cout << "enter number m" << endl;  
	int m = 0;                           
	cin >> m; 
	cout << "enter number N" << endl;       
    int N = 0;                          
	cin >> N;
	cout << "enter number k" << endl;       
    int k = 0;                          
	cin >> k;
	
	int arr[ N - m + 1 ];          
	int i = 0;
	bool kratne = true;
	float c = 0;
	
	
	while ( m <= N )
	{
		arr[i] = m;
		m += 1;
		c =  arr[i] % k;

		bool kratne = ( c = 0 );
		
		if ( kratne )
		{
			cout << arr[i] << " - kratne k " << endl;
		}
	return 0;
	}
	}
