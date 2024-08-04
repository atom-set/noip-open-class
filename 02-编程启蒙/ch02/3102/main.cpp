#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, x, y, z;
    cin >> n >> x >> y;

    z = y % x == 0 ? y / x : (y / x) + 1;
    
    if (n > z) {
        cout << n - z;
    } else {
        cout << 0;
    }

    return 0;
}