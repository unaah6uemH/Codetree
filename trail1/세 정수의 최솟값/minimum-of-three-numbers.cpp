#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a <= b && b <= c) cout << a;
    else if (a <= b && c <= a) cout << c;
    else if (b <= a && a <= c) cout << b;
    else if (b <= c && c <= a) cout << b;
    else if (c <= b && b <= a) cout << c;
    else cout << a;

    // Please write your code here.
    return 0;
}