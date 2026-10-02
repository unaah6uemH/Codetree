#include <iostream>
using namespace std;

int main() {
    int a_age, b_age;
    char a_gen, b_gen;

    cin >> a_age >> a_gen >> b_age >> b_gen;

    if ((a_age >= 19 && a_gen == 'M') || (b_age >= 19 && b_gen == 'M')) cout << 1;
    else cout << 0;
    // Please write your code here.
    return 0;
}