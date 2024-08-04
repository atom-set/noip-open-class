#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;

    y = x % 3 == 0 ? x / 3 : (x / 3) + 1;
    cout << y;

    return 0;
}