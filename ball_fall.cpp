// визначити висоту м'€чика 

#include <iostream>
#include <cmath>
#include "constants.h"


using namespace std;
using namespace myConstants;

double getTheHeight()
{
	cout << " Enter the initial height of the tower meters " << endl;
	double initialHeight;
	cin >> initialHeight; 
	return initialHeight;
}

void getAndPrintCurrentHeight(double initialHeight)
{
	int seconds;
	double currentHeight;
	for (seconds = 0; currentHeight > 0; seconds++)
	{
		currentHeight = initialHeight - (gravity * pow(seconds, 2) / 2); 
		cout << " At " << seconds << " seconds, the ball is at height: " << currentHeight << " meters " << endl;
	}
}

int main ()
{
	double initialHeight = getTheHeight();
	getAndPrintCurrentHeight(initialHeight);
	return 0;
}

