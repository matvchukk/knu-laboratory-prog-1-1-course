// ��������� 2 ����� �����

#include <iostream>
using namespace std;

int readNumber()
{
	cout << " Write an integer: " << endl;
	int x;
	cin >> x;
	return x;
}

void writeAnswer(int x)
{
	cout << " Your result is: " << x << endl;
}

int main()
{
	int a = readNumber();
	int b = readNumber();
	writeAnswer(a+b);
	return 0;
}
