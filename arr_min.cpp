//������ ��������� ������� �� ���� �����

#include <iostream>
using namespace std;

int main(int argc, char** argv){
const int n = 5;
int b[n];
int i;

for (i=0; i<n; i++)
{
	cin >> b[i];  //�������� �����
}
int imin;

for (i=0; i<n; i++)
{
	for (int j=i+1; j<n; j++) //������ ����� ����������
	{
    	if (b[j] < b[imin]) 
	  {
	  	imin = j;	
	  }
	  b[i] = b[imin];
	}
}
cout << imin << endl;
cout << b[imin] << "  " ;

}
