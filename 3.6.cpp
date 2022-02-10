//знайти всі досконалі числа <N
#include <iostream>
#include <cstdlib>

using namespace std; 

void doskonale (int n)
{
	int sum = 0;
	for (int a = 1; a < n; a++) //числа
	{
		for (int b = 1; b < n; b++) //дільники
		{
			if ( a % b == 0 )
			{
				sum += b;
			}
		}
		if ( a == sum )
		{
			cout << a << "  - doskonale" ;
			
		}
	}
}
int main(int argc, char** argv) 
{
	cout << " vvedit N " << endl ;
	int n1 = 0;
	cin >> n1;

	
	doskonale (n1);
	
	
}
