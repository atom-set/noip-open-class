#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x % 2 == 0) {
        cout << 0;
    }

    if (x % 2 == 1) {
        cout << 1;
    }

    return 0;
}