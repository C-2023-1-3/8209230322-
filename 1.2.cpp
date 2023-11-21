#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    float v, r, h;
    cout << "r= " << endl;
    cin >> r;
    cout << "h=" << endl;
    cin >> h;
    v = PI*r * r * h / 3;
    cout << "v=" <<v<< endl;
    return 0;
}


