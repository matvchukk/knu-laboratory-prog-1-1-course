//� ������� � ����� ����� ��������� ����� ����� � ������������ ������� ������� ��������.


#include <iostream>
using namespace std;

int main(int argc, char** argv){
const int n = 4; //������ �������
const int m = 5;
int b[n][m];

int i; 
int j;
cout << "array " << n << " * " << m << endl; //�������� �������
for (i = 0; i < n; i++)
{
	for (j = 0; j < m; j++)
	{
		cin >> b[i][j];
	} 	
}

int r = -1; 
int maxnul = 0; //����� ����� �� ������� 0
for (i = 0; i < n; i++) 
{   
	int kn = 0;    //������� 0 � i-���� �����
	for (j = 0; j < m; j++)   
	{
		if (b[i][j] == 0) 
		{
			kn++;
			if (kn > maxnul)
    		{
				r = i; 
				maxnul = kn;
			}	
		}
	}
	
}

if (maxnul == 0)  
{
	cout << "absent" << endl;		
} 
else 
{
	cout << "riadok = " << (r + 1) << " kilkist = " << maxnul << endl;	
} 
}
 
 
