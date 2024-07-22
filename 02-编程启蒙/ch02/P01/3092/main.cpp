#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x, z;
    cin >> x;

    if (x > 6) {
        x = x - 6;
        z = 6 * 5 + x * 7;
    } else {
        z = x * 5;
    }

    cout << z;
    return 0;
}