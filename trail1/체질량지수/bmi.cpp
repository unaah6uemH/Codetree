#include <iostream>
using namespace std;

int main() {
    int b, h, w;

    cin >> h >> w;

    b = (10000 * w) / (h * h);

    cout << b << "\n";

    if (b >= 25) {
        cout << "Obesity";
    }
    // Please write your code here.
    return 0;
}