#include<iostream>
using namespace std;
int main()
{
	int n = 2, day = 0;
	float money = 0, average;
	while (n < 100)
	{
		money = money + 0.8 * n;
		day++;
		n = 2*n;
	}
	average = money / day;
	cout << "平均每天花" << average << "元" << endl;
	return 0;
}