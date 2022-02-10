// в матриці n*m знайти найменше значення серед найбільших елементів з кожного рядка
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void array (int arr[100][100], int height, int length)
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

void max_i_min (int arr1[100][100], int height, int length, int mmax, int mmin)
{
	int arr_max[100] = {0};
	
	for (int i = 0; i < height; i++)
	{
		mmax = arr1[i][0];
	    for (int j = 1; j < length; j++)
	    {	
	    	if (arr1[i][j] > mmax) 
			{	
				mmax = arr1[i][j];
				for (int k = 0; k < height; k++)
				arr_max[k] += mmax;
				cout << " arr max      " << arr_max << endl;
			}		   
		}
	}

	
	
	for (int k = 0; k < height; k++)
	{
		mmin = arr_max[0];
		if (arr_max[k] < mmin)
		{
			mmin = arr_max[k];
		} 	
	cout << " min      " << mmin << endl;
		
	}
}


int main(int argc, char** argv) 
{
	cout << " vvedit kilkist riadkiv, do 100 " << endl ;
	int n = 0;
	cin >> n;
	
	cout << " vvedit kilkist stovpchukiv, do 100 " << endl ;
	int m = 0;
	cin >> m;
	
	int arr1[100][100] = {};
	srand(time(0));
	int max;
	int min;
	int arr_maxx[100] = {};
	array (arr1, n, m);
	max_i_min (arr1, n, m, max, min);
	
	cout << "kilkist -   " << max << endl;
	

	
	
}
