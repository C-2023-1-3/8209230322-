#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "x=" << endl;
	cin >> x;
	if (0 < x && x < 1) {
		y = 3 - 2*x;
		cout << "y=" << y << endl;
	}
	if (1<= x && x < 5) {
		y = 2/(4*x)+1;
		cout << "y=" << y << endl;
	}
	if (5<= x && x < 10) {
		y = x* x;
		cout << "y=" << y << endl;
	}
	return 0;

}