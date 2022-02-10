//перевіряєм чи є число 0

#include <iostream>
using namespace std; 

int takeTheNumber()
{
	cout << " Enter an integer: " << endl;
	int x;
	cin >> x;
	return x;
}

int main()
{
	int a = takeTheNumber();
	if (a == 0)
	{
		cout << " An integer is 0 " << endl;
	}  
	else
	{
		cout << " An integer is not 0 " << endl;
	}
	return 0;
}

