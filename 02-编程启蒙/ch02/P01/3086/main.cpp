#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x == 0) {
        cout << "zero";
    }

    if (x > 0) {
        cout << "positive";
    }

    if (x < 0) {
        cout << "negative";
    }

    return 0;
}