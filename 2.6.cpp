#include<iostream>
using namespace std;
int main()
{
	int a, b, c, z;
	cout << "������������������";
	cin >> a >> b;
	c = a * b;
	if (b > a)  
	{
		z = a;
		a = b;
		b = z;
	}
	while (a % b) 
	{
		z = b;
		b = a % b;
		a = z;
	}
	c = c / b;
	cout << "���Լ���ǣ�" << b << endl;
	cout << "��С�������ǣ�" << c << endl;
	return 0;
}
