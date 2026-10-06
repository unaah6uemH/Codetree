#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n == 2) cout << 28;
    else if (n % 2 != 0)
        if (n <= 7) cout << 31;
        else cout << 30;
    else
        if (n <= 7) cout << 30;
        else cout << 31;
    // Please write your code here.
    return 0;
}