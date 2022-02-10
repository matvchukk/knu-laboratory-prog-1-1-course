// перевірити, чи є число досконалим
#include <iostream>
using namespace std;       

int main( int argc, char** argv ) {
	
	cout << "enter number" << endl;  
	int n = 0;        
	cin >> n;	

	int arr[n+1];          
	int i = 0;	 
	
	int length = i;      
       
	
	int k = 0;
	int s = 0;
	for (int i = 0; ( i < length ); i++)
	{
		k = n % arr[i];
		
		if (k=0)
		{
		
		s+=arr[i];
		
		}
	}
	n = s - n;
	if (n == 0)
	{
		cout << n << "- doskonale chuslo" << endl;	
	}
	else
	{
		cout << n << "- ne doskonale chuslo" << endl;	
	}
	
}
	
