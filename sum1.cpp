//ќбчисленн€ суми цифр заданого натурального числа
#include <iostream>
#include <cstdlib>

using namespace std; 

int digitsSum(int n)
{ 
int sum = 0;   //початкове значенн€ sum
while (n > 0)
	{
	sum += n % 10;   
	n /= 10;
    }    
  //n = 0, sum Ц сума цифр
   return sum;
   cout << "sum "<< sum << endl;
}

int main(int argc, char** argv) 
{
	cout << " vvedit N " << endl ;
	int n1 = 0;
	cin >> n1;
	
	int sum1;
	digitsSum (n1);
	cout << sum1 << endl;
}
