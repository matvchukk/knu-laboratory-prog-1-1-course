//сума всіх елементів масиву

#include <iostream>
using namespace std;

int main(int argc, char** argv){
const int n = 20;
int i, sum;
int marks[n] = {3, 4, 5, 4, 4, 4};
 
for (i=0, sum=0; i<n; i++)
{
 sum += marks[i];
}
 cout << " Sum = " << sum << endl;
}
