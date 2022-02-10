// перевірка на просте число

#include <iostream>
using namespace std;

int getUserInput()
{
	cout << " Write an integral " << endl;
	int x;
	cin >> x;
	return x;
}

int main()
{
	int a, i;
	a = getUserInput();	
	bool check;
	
	for (i = 2; i < a; i++)
	{
		if ( a % i == 0) 
		{
			check = true;
			break;
		}
		else
		{
			check = false;
		}
	}
	
	if (check)
	{
		cout << " An integral is not prime " << endl;
	}
	else
	{
		cout << " An integral is prime " << endl;
	}

	return 0;
}
