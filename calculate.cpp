//калькулятор

#include <iostream>
using namespace std;

int getUserInput()
{
	cout << " Please enter an integer: " << endl;
	int value;
	cin >> value;
	return value;
}

int getMathOperation()
{
	cout << " Please enter an operation (1 = +, 2 = -, 3 = *, 4 = /): " << endl;
	int op;
	cin >> op;
	return op;
}

int calculate(int x, int op, int y)
{
	if ( op == 1 )
	{
		return x + y;
	}
	
	if ( op == 2 )
	{
		return x - y;
	}
	
	if ( op == 3 )
	{
		return x * y;
	}
	
	if ( op == 4 )
	{
		return x / y;
	}
	
	return -1; //якщо користувач ввів неправильний символ(якщо все було правильно, програма зупинилась на попередньому return)
}

void print(int result)
{
	cout << " Your result is: " << result << endl;
}

int main()
{
	int input1 = getUserInput();
	int input2 = getUserInput();
	int op = getMathOperation();
	int result = calculate(input1, op, input2);
	print(result);
	return 0;
}
