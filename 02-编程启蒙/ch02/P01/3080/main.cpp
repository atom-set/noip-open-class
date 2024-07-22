
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    bool x;
    int y;
    cin >> y >> x;

    x = y;
    y = x;

    cout << x;
    return 0;
}