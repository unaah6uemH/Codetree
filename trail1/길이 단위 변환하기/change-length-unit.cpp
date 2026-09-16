#include <iostream>
using namespace std;

int main() {
    double ft = 9.2;
    double mi = 1.3;

    cout << fixed;

    cout.precision(1);

    cout << ft << "ft = " << ft * 30.48 << "cm" << "\n";
    cout << mi << "mi = " << mi * 160934 << "cm" << "\n";
    // Please write your code here.
    return 0;
}