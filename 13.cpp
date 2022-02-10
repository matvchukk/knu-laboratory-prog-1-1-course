// дано трикутник, знайти центр та радіус описаного та вписаного кіл
#include <iostream>
#include <math.h>
using namespace std;       

int main( int argc, char** argv ) {
	
	cout << " vvedit koordunatu vershun trukytnuka " << endl;  
	cout << " dlia A: x=" << endl;  
	double Ax = 0;        
	cin >> Ax;
	cout << "y=" << endl;
	double Ay = 0;        
	cin >> Ay;
	
	
	cout << " dlia B: x=" << endl;  
	double Bx = 0;        
	cin >> Bx;
	cout << "y=" << endl;
	double By = 0;        
	cin >> By;	
		
	cout << " dlia C: x=" << endl;  
	double Cx = 0;        
	cin >> Cx;
	cout << "y=" << endl;
	double Cy = 0;        
	cin >> Cy;
	
	double a = 0;
	double b = 0;
	double c = 0;
	a = sqrt( pow( (Bx - Ax), 2) + pow( (By - Ay), 2) );
	b = sqrt( pow( (Bx - Cx), 2) + pow( (By - Cy), 2) );
	c = sqrt( pow( (Cx - Ax), 2) + pow( (Cy - Ay), 2) );
	
	double R = 0;
	double r = 0;
	
	double p = 0;
	p = (a + b + c)/2;
	
	R = (a * b * c)/(4 * sqrt( p * (p-a) * (p-b) * (p-c)));
	r = sqrt(((p-a) * (p-b) * (p-c))/p);
	
	double xo = 0; 
	double yo = 0;
	double xO = 0;
	double yO = 0;        
	
	xo = (a * Cx + b * Ax + c * Bx)/(a + b + c);
	yo = (a * Cy + b * Ay + c * By)/(a + b + c);

	xO = ((pow (Ax, 2) + pow (Ay, 2) * By) + (pow (Bx, 2) + pow (By, 2) * Cy) + (pow (Cx, 2) + pow (Cy, 2) * Ay) - ((pow (Cx, 2) + pow (Cy, 2) * By) - (pow (Bx, 2) + pow (By, 2) * Ay) - (pow (Ax, 2) + pow (Ay, 2) * Cy)) )/(2 * (Ax * By + Ay * Cx + Bx * Cy - By * Cx - Ay * Bx - Ax * Cy));
	yO = (Ax * (pow (Bx, 2) + pow (By, 2) + Cx * (pow (Ax, 2) + pow (Ay, 2) + Bx * (pow (Cx, 2) + pow (Cy, 2) - Cx * (pow (Bx, 2) + pow (By, 2) - Bx * (pow (Ax, 2) + pow (Ay, 2) - Ax * (pow (Cx, 2) + pow (Cy, 2)/(2 * (Ax * By + Ay * Cx + Bx * Cy - By * Cx - Ay * Bx - Ax * Cy) ))))))));

	cout << "r opusanogo = " << R << endl;
	cout << "r vpusanogo = " << r << endl;	
	cout << "centr vpusanogo = (" << xo <<";"<< yo << ")" << endl;
	cout << "centr opusanogo = (" << xO <<";"<< yO << ")" << endl;
}
	
