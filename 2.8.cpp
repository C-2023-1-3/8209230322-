#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout<< "������һ����" << endl;
	cin >> a;
	b = a, c = (b + a / b) / 2;
	while (abs(c - b) <= 5)
	{
		b = c;
		c = (b + a / b) / 2;
		cout << c;
		break;
	}
	return 0;
}