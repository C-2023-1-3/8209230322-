#include<iostream>
using namespace std;
int main()
{
	float num1, num2, result;
	char op;
	cout << "��������һ" << endl;
	cin >> num1;
	cout << "��������ķ���" << endl;
	cin >> op;
	cout << "�������ֶ�" << endl;
	cin >> num2;
	switch (op) {
	case'+':result = num1 + num2;
		cout << "����ǣ�" << result << endl;
		break;
	case'-':result = num1 - num2;
		cout << "����ǣ�" << result << endl;
		break;
	case'*':result = num1 * num2;
		cout << "����ǣ�" << result << endl;
		break;
	case'/':if (num2 == 0)
	{
		cout << "��������Ϊ0" << endl;
	}
		   else {
		result = num1 / num2;
		cout << "����ǣ�" << result << endl;
	}break;
	case'%':
		if (num2 == 0)
		{
			cout << "��������Ϊ0" << endl;
		}
		else {
			int a = static_cast<int>(num1);
			int b = static_cast<int>(num2);
			result = a % b;
			cout << "����ǣ�" << result << endl;
		}
		break;
	default:
		cout << "������Ƿ�" << endl;
	}






	return 0;
}