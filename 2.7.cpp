#include<iostream>
using namespace std;
int main()
{
	
		int i, j;
		for (i = 5; i >= 0; i--)
		{
			for (j = 0; j < 5 - i; j++) printf("*");
			printf("\n");
		}

		return 0;
	
}