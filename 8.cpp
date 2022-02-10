//знайти точку перетину двох відрізків
#include <iostream>
using namespace std;       

int main( int argc, char** argv ) {
	
	cout << "vvedit rivniannia priamuh y vugliadi y = kx + b " << endl;  
	cout << "k 1 priamoyi = " << endl;  
	double k1 = 0;        
	cin >> k1;
	
	cout << "b 1 priamoyi = " << endl;  
	double b1 = 0;        
	cin >> b1;	
	
	
	cout << "k 2 priamoyi = " << endl;  
	double k2 = 0;        
	cin >> k2;
	
	cout << "b 2 priamoyi = " << endl;  
	double b2 = 0;        
	cin >> b2;	       
	 
	
	
	
	double x = 0;
	x = (b2 - b1) / (k1 - k2);
	double y = 0;
	
	
	if ( (b2 - b1) != 0 )
	{
		if ( (k1 - k2) != 0)
		{
			y = k1 * x + b1;
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
		}
	
	}
}
