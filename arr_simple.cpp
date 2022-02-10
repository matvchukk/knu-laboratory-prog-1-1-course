// прості числа
#include <iostream>
#include <fstream>
using namespace std;


//   24 11 22 33
// i  0  1  2  3
//
//
//
// A[i+1] ?


void task1 (int a[10], int &max)
{

}
int main(int argc, char** argv)
{
	int a[10] = {9, 5, 6, 43, 4, 64, 1, 9, 12, 32};
	int max = 10;
	for (int i = 0; i <= max; i++)
	{
		int j = 2;
		while ((( a[i] % j )!= 0) && ( j <= a[i] / 2 ))
		{
			j++;
			if ( j == a[i] / 2 + 1 )
			{
				cout << "simple  "<< a[i] << endl;
				for (int k = i; k < max; k++)
		    	{ 
		        	a[k] = a[k+1];
		        	
		    	}
		    	max--;
		    	i--;
			}
		}
		
	}
}

