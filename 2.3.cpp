#include<iostream>
using namespace std;
int main()
{
	float a ,b ,c , C;
	cout << "a=" << endl;
	cin >> a;
	cout << "b=" << endl;
	cin >>b;
	cout << "c=" << endl;
	cin >> c;

	if (a + b > c && a + c > b && b + c > a) {
		cout << "����������" << endl;
		C = a + b + c;
		cout << "C=" << C << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���ǵ���������" << endl;
		}
	}
	else {
		cout << "�ⲻ��������" << endl;
	}

	return 0;
		
}