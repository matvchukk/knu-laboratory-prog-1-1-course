#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    char str[256] = "\0";
    cout << "Enter a word: " << endl;
	cin >> str;
 
	for (int index = 0; str[index] != '\0'; index++)
	{
		cout << str[index] << " ";
	}
	return 0;
}
