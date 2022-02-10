#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void create_array (int arr[100][100], int height, int length)
{
	for (int i = 0; i < height; i++)
	{
	    for (int j = 0; j < length; j++)
	    {
	    	arr[i][j] = rand() % 99 + 1;
	    	cout << arr[i][j] << "    ";
	    }
		cout << endl;	
	}	        
}

void check (int arr1[100][100], int height, int length, int kilk)
{
	for (int i = 0; i < height; i++)
	{
	    for (int j = 0; j < length; j++)
	    {	
	    	for (int k = 1; k <=(length-1); k++)
			{
				if ( arr1[i][j] != arr1[i][j+k] )
	    			{
	    				kilk++;
					}
				
			}
			length--;  	   
		}
	}
	cout << " bl      " << kilk << endl;
}

int main(int argc, char** argv) {
	
	
	cout << " vvedit kilkist riadkiv, do 100 " << endl ;
	int n = 0;
	cin >> n;
	
	cout << " vvedit kilkist stovpchukiv, do 100 " << endl ;
	int m = 0;
	cin >> m;
	
	int arr1[100][100] = {};
	srand(time(0));
	int kk;
	
	create_array (arr1, n, m);
	check (arr1, n, m, kk);
	
	cout << "kilkist -   " << kk << endl;
	
	return 0;
}
	
