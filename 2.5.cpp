#include <iostream>
using namespace std;
int main() {
    int English = 0, number = 0, blank = 0, other = 0;
    char c;
    while ((c = getchar()) !='\n') {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            English++;
        }
        else if (c >= '0' && c <= '9') {
            number++;
        }
        else if (c == ' ') {
            blank++;
        }
        else {
            other++;
        }
    }
    cout <<"English="<< English << endl;
    cout << "number=" << number << endl;
    cout << "blank=" << blank << endl;
    cout << "other=" << other << endl;
    return 0;
}
