#include<iostream>
using namespace std;
int main()
{
	char A,B;
	cout << "��������ĸ��" << endl;
	cin >> A;
	if (A >= 'a' && A <= 'z') {
		A = A - 32;
		cout << A << endl;
	}
	else {
		cout << A+1 << endl;
		
		
	}

	return 0;
}