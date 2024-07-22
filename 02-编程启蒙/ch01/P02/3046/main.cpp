#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3, c4, c5;
    char r1, r2, r3, r4, r5;

    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    r1 = char(c1 + 4);
    r2 = char(c2 + 4);
    r3 = char(c3 + 4);
    r4 = char(c4 + 4);
    r5 = char(c5 + 4);

    cout << r1 << r2 << r3 << r4 << r5;

    return 0;
}