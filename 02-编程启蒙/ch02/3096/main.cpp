#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    if (x >= 30) {
        cout << x * (50 - 2);
    } else {
        cout << x * 50;
    }

    return 0;
}