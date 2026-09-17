#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int tot = a + b + c;

    a = b = c = tot;

    cout << a << " " << b << " " << c;
    // Please write your code here.
    return 0;
}