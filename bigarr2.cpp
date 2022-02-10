//злиття двох впорядкованих масивів

#include <iostream>
using namespace std;

int main(int argc, char** argv){
	
int n=5;
double a[n];
double b[n];
double c[2*n];

//введення першого масиву
 cout << "array a[5]: " << endl;
 for (int i=0; i<n; i++)
 {
 	cin >> a[i];
 }
//введення другого масиву
 cout << "array b[5]: " << endl;
 for (int i=0; i<n; i++)
 {
 	cin >> b[i];
 }
   
//злиття
 int i, j, k;
    i=j=k=0;
    while (i<n && j<n)
    {
    	if (a[i]<b[j])
    	{
    		c[k++]=a[i++];
		}
    	else
    	{
    		c[k++]=b[j++];
		}
	}
      
    while(i<n) 
    {
    	c[k++]=a[i++];
	}
    while(j<n)
	{
		c[k++]=b[j++];
	} 
  
//виведення результату
cout << "array c[10]: ";
for (int i=0; i<2*n; i++)  
{
	cout << c[i] << "  "; 
} 
}




