#include<iostream>
using namespace std;
int main()
{
	float num1, num2, result;
	char op;
	cout << "输入数字一" << endl;
	cin >> num1;
	cout << "请输入你的符号" << endl;
	cin >> op;
	cout << "输入数字二" << endl;
	cin >> num2;
	switch (op) {
	case'+':result = num1 + num2;
		cout << "结果是：" << result << endl;
		break;
	case'-':result = num1 - num2;
		cout << "结果是：" << result << endl;
		break;
	case'*':result = num1 * num2;
		cout << "结果是：" << result << endl;
		break;
	case'/':if (num2 == 0)
	{
		cout << "除数不能为0" << endl;
	}
		   else {
		result = num1 / num2;
		cout << "结果是：" << result << endl;
	}break;
	case'%':
		if (num2 == 0)
		{
			cout << "除数不能为0" << endl;
		}
		else {
			int a = static_cast<int>(num1);
			int b = static_cast<int>(num2);
			result = a % b;
			cout << "结果是：" << result << endl;
		}
		break;
	default:
		cout << "运算符非法" << endl;
	}






	return 0;
}