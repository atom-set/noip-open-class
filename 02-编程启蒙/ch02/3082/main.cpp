#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3, max;
    cin >> x1 >> x2 >> x3;

    max = x1;

    if (x2 > max) {
        max = x2;
    }

    if (x3 > max) {
        max = x3;
    }

    cout << max;
    return 0;
}