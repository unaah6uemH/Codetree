#include <iostream>
using namespace std;

int main() {
    int degree;

    cin >> degree;

    if (degree < 0) {
        cout << "ice";
    }
    else if (degree >= 100) {
        cout << "vapor";
    }
    else {
        cout << "water";
    }
    // Please write your code here.
    return 0;
}