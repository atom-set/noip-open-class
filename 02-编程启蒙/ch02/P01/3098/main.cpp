#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    long long x, y, total;
    cin >> x >> y;

    total = (x * 3) + (y * 60);

    if (total >= 480) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}