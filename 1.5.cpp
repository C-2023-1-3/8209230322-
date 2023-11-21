#include<iostream>;
#include<iomanip>
using namespace std;
int main()
{
	float f,c;
	cout << "f=" << endl;
	cin >> f;
	c = ( f - 32) * 5 / 9;
	cout << "c=" <<fixed<<setprecision(2)<<c<< endl;
	return 0;
  
}