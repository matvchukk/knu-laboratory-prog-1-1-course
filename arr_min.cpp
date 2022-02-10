//знайти найменший елемент та його номер

#include <iostream>
using namespace std;

int main(int argc, char** argv){
const int n = 5;
int b[n];
int i;

for (i=0; i<n; i++)
{
	cin >> b[i];  //введення даних
}
int imin;

for (i=0; i<n; i++)
{
	for (int j=i+1; j<n; j++) //шукаємо номер найменшого
	{
    	if (b[j] < b[imin]) 
	  {
	  	imin = j;	
	  }
	  b[i] = b[imin];
	}
}
cout << imin << endl;
cout << b[imin] << "  " ;

}
