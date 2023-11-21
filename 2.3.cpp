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
		cout << "这是三角形" << endl;
		C = a + b + c;
		cout << "C=" << C << endl;
		if (a == b || a == c || b == c)
		{
			cout << "这是等腰三角形" << endl;
		}
	}
	else {
		cout << "这不是三角形" << endl;
	}

	return 0;
		
}