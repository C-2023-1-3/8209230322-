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
	cout << "ƽ��ÿ�컨" << average << "Ԫ" << endl;
	return 0;
}