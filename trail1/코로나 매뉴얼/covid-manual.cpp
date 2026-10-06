#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char d, e, f;
    
    int A = 0;

    cin >> d >> a >> e >> b >> f >> c;

    if (d == 'Y' && a >= 37) A += 1;
    if (e == 'Y' && b >= 37) A += 1;
    if (f == 'Y' && c >= 37) A += 1;

    if (A >= 2) cout << "E";
    else cout << "N";
    // Please write your code here.
    return 0;
}