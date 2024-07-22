#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3, min;
    cin >> x1 >> x2 >> x3;

    min = x1;

    if (min > x2) {
        min = x2;
    }

    if (min > x3) {
        min = x3;
    }

    cout << "min=" << min;

    return 0;
}