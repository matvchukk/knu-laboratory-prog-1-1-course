//виведення в прямому та оберненому порядках

#include <iostream>
using namespace std;
int main()
{
const short arr_size = 20;
int arr[arr_size];
for (int i=0; i<arr_size; ++i) {
    arr[i] = 2*i+2; }
for (int i=0; i<arr_size; ++i) {
  cout << i << "   " << arr[i] << endl;}
cout << "-------------------------------" << endl;
for (int i=arr_size-1; i>=0; --i) {
  cout << i << "   " << arr[i] << endl;}
}
