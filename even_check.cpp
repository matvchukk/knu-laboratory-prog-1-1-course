//перевірка на парність

#include <iostream>
using namespace std;

int getUserInput()
{
	cout << " Enter an integer: " << endl;
	int x;
	cin >> x;
	return x;
}

void checkEven(int x)
{
	bool even;
	if (x % 2 == 0)
	{
		even = true;
	}
	cout << boolalpha;
	cout << " An integer is even --> " << even << endl; 
}

int main()
{
	int a = getUserInput();
	checkEven(a);
	return 0;
}
