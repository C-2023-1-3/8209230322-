#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 8, a;
	cout << "output in unsigned int 1 type:" <<testUnint<< endl;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; 
	cout << "output in Oct unsigned int type:" << oct <<testUnint  << endl;
	cin >> a;
	cout << "处理后的值为" <<a<< endl;
	system("pause");
	return 0;
}