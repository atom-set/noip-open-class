#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double x, y, r;
    cin >> x >> r;
    x = x / 10;
    r = r * x;
    r = int(r / 10);
    cout << r * 10;
    return 0;
}