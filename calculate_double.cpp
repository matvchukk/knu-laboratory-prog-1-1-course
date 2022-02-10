// калькулятор з плаваючою крапкою

#include <iostream>
using namespace std;

double getUserInput()
{
	cout << " Enter a double value: " << endl;
	double x;
	cin >> x;
	return x;
}

char getAnOperation()
{
	cout << " Enter one of the following: +, -, * or /: " << endl;
	char x;
	cin >> x;
	return x;
}

void printResult(double x, double y, char sign)
{
	if (sign == '+')
	{
		cout << x+y << endl;
	}
	
	if (sign == '-')
	{
		cout << x-y << endl;
	}
	
	if (sign == '*')
	{
		cout << x*y << endl;
	}
	
	if (sign == '/')
	{
		cout << x/y << endl;
	}
	
/*	else
	{
		cout << " Error " << endl;
	}
*/
}

int main()
{
	double a = getUserInput();
	double b = getUserInput();
	char op = getAnOperation();
	printResult(a, b, op);
	return 0;
}
